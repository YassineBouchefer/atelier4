#include<iostream>
#include <list>
#include <iterator>
using namespace std;
class repas;
class chat;
class animal;
class element;
class entraineur ;
class chein;
class race ;
class compitition;

//class repas
class repas {
	private:
	string name;
	signed int heure;
	string description ;
	list<element>*listb;
	public:
		repas(){
		}
		void setName(string name ){
			this->name=name;
		}
		string getName(){
			return this->name;}
		void setHeure(signed int heure){
			this->heure=heure;}
			
		int getHeure(){
			return this->heure;
			}
		void setDescription(string description){
			this->description=description;
			}
			
		string getDescription(){
			return this->description;}
		void setlistelement(list<element> *listelement){
			this->listb=listb;
		}
		list<element>* getlistelement(){
			return this->listb;
		}
		~repas(){
			cout<<"destroy the list in the same time as repas boject 'composition'"<<endl;
		}
		delete this->listb;
		cout<<"call  dist of repas "<<endl;
};
//class animal
class animal {
	protected :
		string nom;
		signed int age ;
		string genre ;
};
//Class chat 
class chat: public animal {
	 string type ;
	 repas bobject;
	 public:
	 	void sauter();
	 	void setType(string type){
	 		this->type=type;
		 }
		 string getType(){
		 	return this->type;
		 }
		 void setB(repas bobject ){
         this->bobject = bobject ;
     }
         repas getB(){
       return this->bobject ;
}
};
//class element
class element{
	private:
		string nom;
		string type;
	    repas a;
	public:
		void setNom(string nom){
			this->nom=nom;
		}
		string getNom(){
			this->nom;
		}
			void setType(string type){
			this->type=type;
		}
		string getType(){
			this->type;
		}
		void setrepas(repas a ){
			this->a=a;
		}
		repas getrepas(){
	     	this->a;}
		~element(){
			cout<<"call dist of B"<<endl;

		}
};
//classe chien extand de la classe animal
 class chien:public animal:public race {
 	string taille;
 	list<entraineur>lista;
 	public :
 		 void ischass3();
 	    void setTaille(string taille){
 	    	this->taille=taille;
		 }
		 string getTaille(){
		 	return this->taille;
		 }
		 void setlistentraineur(list<entraineur> lista){
		 	this->lista=lista;
		 }
		 list<entraineur> getlistEntraineur(){
		 	return this->lista;
		 }
		 
 };
 //class entraineur 
class entraineur {
	string name;
	string description;
	list<chien>listb;
	public:
		void setName(string name){
			this->name=name;
		}
		string  getName(){
			return this->name;
		}
		void setDescription(string description){
			this->description=description;
		}
		string getDescription(){
			return this->description;
		}
		void setlistchien(list<chien>listb){
			this->listb=listb;
		}
		list<chien> getlistchien(){
			return this->listb;
		}
		
};
//classe compitition 
class  compitition {
	private :
		string date;
		string nom;
		int signed ordre;
		entraineur b;
		chien a;
		
	public:
		int signed ordre;
		void setDate( string date){
			this->date=date;
		}
		string getDate(){
			return this->date;
		}
		void setNom(string nom){
			this->nom=nom;
		}
		string getNom(){
			return this->nom;
		}
		void setOrdre( int signed ordre){
			this->ordre=ordre;
		}
		int signed getOrdre(){
			return this->ordre;
		}
		void setChien(chien a){
			this-a>a;
		}
		chien getChien(){
			return this->a;
		}
		void setEntraineur(entraineur b){
			this->b=b;
		}
		entraineur getEntraineur(){
			return this->b;
		}
};
class race {
	protected:
		string specifecite;
		void israceHybride();
};
