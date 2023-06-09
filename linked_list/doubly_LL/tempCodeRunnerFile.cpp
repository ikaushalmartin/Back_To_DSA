  node* newnode=new node(data);

    if(place==1){
        
        insert_at_head(head,data);
        
    }

    else if(place==6){
        insert_at_tail(head,data);
        
    }

    else{
        int count=1;
        node* temp=head;
        while(count!=place-1){
            temp=temp->next;
            count++;
        }

        newnode->next=temp->next;
        temp->next->prev=newnode;
        temp->next=newnode;
        newnode->prev=temp;
    }
