#include <stdio.h>
#include <string.h>

struct person{
	int ID;
	char first[10];
	char last[10];
	struct person *next;
};

static struct person data[] = {
	{0, "Jonh", "Marton", NULL},
	{1, "Mark", "T", NULL},
	{2, "Smith", "W", NULL},
	{3, "Robert", "P", NULL}
};

void look_up_namme(struct person *ptr, int ID);

struct person *make_list(struct person *head, int id){
	
	struct person *p;
	// printf("%d\n", data[id].ID);
	data[id].next = head;
	head = p;

	return head;
}



int main(){
	struct person *head;
	head = NULL;
	int id;
	for (int i = 0; i < 4; ++i){
		head = make_list(head, i);
	}
	printf("Input ID\n");
	scanf("%d", &id);

	look_up_namme(&data[0], id);

	return 0;
}

void look_up_namme(struct person *ptr, int ID){

	// printf("%s\n", ptr[0].first);
	while(ptr != NULL){
		// printf("%d\n", ptr->ID);
		// printf("%p\n", ptr->next);
		if (ptr->ID == ID){
			break;
		}
		ptr = ptr->next;
	}

	if (ptr != NULL){
		printf("%s", ptr->first);
		printf(" %s\n",ptr->last );
	} else {
		printf("No such ID in database\n");
	}
	
}