#include<iostream>
#include<vector>
#include<memory>
template <typename T>
class Inventory{
	private:
		std::vector<std::unique_ptr<T>> items;
		int maxSlots;
	public:
		Inventory(int slots) :
			maxSlots(slots{
			})
		void addItem(std::unique_ptr<T> item) {
			items.push_back(std::move(item));
		}
		
		int getCout(){
			return items.size();
		}
		void useALLItems(){
			for(auto& item : items)
		}
			item->use();
};

int main(){
	Inventory<Item> myBag;
	
	myBag.additem(new potion());
	
	int cout = myBag.getCout();
}
