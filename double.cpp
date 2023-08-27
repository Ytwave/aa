#include <iostream>
using namespace std;

class Node{
	public:
		int key;
		string data;
		Node* next;
		
		Node(){
			key = -1;
			data = "-";
			next = NULL;
		}
		
		Node(string s , int k){
			key = k;
			data = s;
			next = NULL;
		}

};

class open_addressing{
	public:
		int hash_key[17];
		string hash_table[17];
		int n = 0;
		int r = 0;
		
		open_addressing(int x , int y){
			n = x;
			r = y;
			for(int i = 0 ; i < n ; i++){
				hash_key[i] = -1;
				hash_table[i] = "-";
			}
		}
		
		void add_double_hashing(int key,string data){
			int hash2 = r - (key %r);
			for(int i = 0 ; i < n ; i++){
				int j = (key + (i*hash2))%n;
				if(hash_key[j] == -1){
					hash_key[j] = key;
					hash_table[j] = data;
					break;
				}
			}
		}
		
		string search_double_hashing(int key){
			int hash2 = r - (key %r);
			for(int i = 0 ; i < n ; i++){
				int j = (key + (i*hash2)) %n;
				if(hash_key[j] == key){
					return hash_table[j];
				}
				if(hash_key[j] == -1){
					return "-";
				}
			}
		}
		
		void print(){
			for(int i = 0 ; i < n ; i++){
				cout << "(" << hash_key[i] << "," << hash_table[i]<< ")";
			}
			cout << endl;
		}
};

class separate_chaining{
	public:
		int n;
		Node hash_table[17];	
		separate_chaining(int x){
			n = x;
		}
		
		void add(int key , string data){
			int j = key %n ; 
			if(hash_table[j].next == NULL){
				hash_table[j].data = data;
				hash_table[j].key = key;
				hash_table[j].next = new Node();
			}
			else{
				Node *new_Node = hash_table[j].next;
				while(new_Node -> next != NULL){
					new_Node = new_Node -> next;
				}
				new_Node -> data = data;
				new_Node -> key = key;
				new_Node -> next = new Node();
			}
		}
		
		string search(int key){
			int j = key %n;
			if(hash_table[j].key == key){
				return hash_table[j].data;
			}
			else{
				Node *new_Node = hash_table[j].next;
				while(new_Node -> next != NULL){
					if(key == new_Node -> key){
						return new_Node -> data;
					}
					new_Node = new_Node -> next;
				}
			}
			return "-";
		}
		
		void print(){
			for(int i = 0 ; i < n ; i++){
				cout << "(" << hash_table[i].key << "," << hash_table[i].data << ")" << endl;
				if(hash_table[i].next != NULL){
					Node *new_Node = hash_table[i].next;
					while(new_Node -> next != NULL){
						cout << "(" << new_Node -> key << "," << new_Node -> data << ")" << endl;
						new_Node = new_Node -> next;
					}
				}
			}
			cout << endl;
		}
		
		
		
		
};

int main(){
	string value;
	char command;
	int key;
	int loop = 0;
	open_addressing OA(17 , 11);
	while(loop != 1){
		cin >> command;
		if(command == 'a'){
			cin >> key >> value;
			OA.add_double_hashing(key , value);
		}
		if(command == 'p'){
			OA.print();
		}
		if(command == 's'){
			cin >> key;
			cout << OA.search_double_hashing(key) << endl;
		}
		if(command == 'e'){
			break;
		}
	}
	
	return 0;
}	

