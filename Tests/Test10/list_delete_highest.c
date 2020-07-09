//This program deletes the node(s) in the 
//list that contain the highest value.
//z5309196 Christopher Luong 29/04/2020

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};

struct node *delete_highest(struct node *head);
struct node *strings_to_list(int len, char *strings[]);
void print_list(struct node *head);

// DO NOT CHANGE THIS MAIN FUNCTION

int main(int argc, char *argv[]) {
    // create linked list from command line arguments
    struct node *head = strings_to_list(argc - 1, &argv[1]);

    struct node *new_head = delete_highest(head);
    print_list(new_head);

    return 0;
}


//
// Delete the node(s) in the list that contain the highest value
// The deleted node(s) are freed.
// The head of the list is returned.
//
struct node *delete_highest(struct node *head) {
          
    if (head == NULL) {
        return head;
    } else {
        int highest = head->data;
        struct node *curr = head;
        struct node *prev = NULL;    
        //loop through list to find the highest value
        while (curr != NULL) {
            if (curr->data > highest) {
                highest = curr->data;
            }        
            curr = curr->next;
        }
        //reset value of curr to loop again
        curr = head;
        //loops through whole list
        while (curr != NULL) {
            //loops until highest number is found, continues in case
            //there is more than one occurence of highest number 
            while (curr != NULL && curr->data != highest) {
                prev = curr;
                curr = curr->next;
            }            
            //if curr isn't NULL, number is highest
            if (curr != NULL) {
                struct node *remNode = curr;
                curr = curr->next;                
                //it's the first number
                if (prev == NULL) {
                    head = curr;
                }//if it's not the first number, the previous 
                //number points to curr 
                else {
                    prev->next = curr;
                }
                free(remNode);
            }
            
        }          
    }  
    return head;

}


// DO NOT CHANGE THIS FUNCTION
// create linked list from array of strings
struct node *strings_to_list(int len, char *strings[]) {
    struct node *head = NULL;
    int i = len - 1;
    while (i >= 0) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->next = head;
        n->data = atoi(strings[i]);
        head = n;
        i -= 1;
    }   
    return head;
}

// DO NOT CHANGE THIS FUNCTION
// print linked list
void print_list(struct node *head) {
    printf("[");    
    struct node *n = head;
    while (n != NULL) {
        // If you're getting an error here,
        // you have returned an invalid list
        printf("%d", n->data);
        if (n->next != NULL) {
            printf(", ");
        }
        n = n->next;
    }
    printf("]\n");
}
