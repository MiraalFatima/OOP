//#include <iostream>
//#include <string>
//using namespace std;
//
//class ShippingContainer {
//private:
//    int containerId;
//
//public:
//    ShippingContainer(int id) {
//        containerId = id;
//    }
//    int getId() const {
//        return containerId;
//    }
//    void setId(int id) {
//        containerId = id;
//    }
//    virtual string getManifest() const = 0;
//};
//
//class ManualShippingContainer : public ShippingContainer {
//private:
//    string manifest;
//
//public:
//    ManualShippingContainer(int id) : ShippingContainer(id) {}
//
//    void setManifest(const string& m) {
//        manifest = m;
//    }
//
//    string getManifest() const override {
//        return manifest;
//    }
//};
//
//class RFIDShippingContainer : public ShippingContainer {
//private:
//    struct Item {
//        string name;
//        int quantity = 0;
//    };
//
//    Item items[100];
//    int itemCount;
//
//public:
//    RFIDShippingContainer(int id) : ShippingContainer(id) {
//        itemCount = 0;
//    }
//
//    void add(const string& name) {
//        // Check if the item is already in the list
//        for (int i = 0; i < itemCount; i++) {
//            if (items[i].name == name) {
//                items[i].quantity++;
//                return;
//            }
//        }
//
//        // Add a new item to the list
//        items[itemCount].name = name;
//        items[itemCount].quantity = 1;
//        itemCount++;
//    }
//
//    string getManifest() const override {
//        string manifest;
//        for (int i = 0; i < itemCount; i++) {
//            manifest += to_string(items[i].quantity) + " " + items[i].name + ". ";
//        }
//        return manifest;
//    }
//};
//
//
//int main() {
//    ShippingContainer* containers[6];
//
//    //  3 ManualShippingContainer 
//    ManualShippingContainer manualContainer1(0001);
//    manualContainer1.setManifest("4 crates of apples. 10 crates of pears.");
//    containers[0] = &manualContainer1;
//
//    ManualShippingContainer manualContainer2(0002);
//    manualContainer2.setManifest("2 crates of oranges. 5 crates of bananas.");
//    containers[1] = &manualContainer2;
//
//    ManualShippingContainer manualContainer3(0003);
//    manualContainer3.setManifest("3 crates of watermelons. 8 crates of pineapples.");
//    containers[2] = &manualContainer3;
//
//    // RFIDShippingContainer
//    RFIDShippingContainer rfidContainer1(0004);
//    rfidContainer1.add("crate of pears");
//    rfidContainer1.add("crate of apples");
//    rfidContainer1.add("crate of pears");
//    containers[3] = &rfidContainer1;
//
//    RFIDShippingContainer rfidContainer2(0005);
//    rfidContainer2.add("crate of oranges");
//    rfidContainer2.add("crate of bananas");
//    rfidContainer2.add("crate of oranges");
//    containers[4] = &rfidContainer2;
//
//    RFIDShippingContainer rfidContainer3(0006);
//    rfidContainer3.add("crate of watermelons");
//    rfidContainer3.add("crate of pineapples");
//    rfidContainer3.add("crate of pineapples");
//    containers[5] = &rfidContainer3;
//
//
//    for (int i = 0; i < 6; i++) {
//        cout << "Shipping container ID: " << containers[i]->getId() << endl;
//        cout << "Manifest: " << containers[i]->getManifest() << endl;
//    }
//
//    return 0;
//}