
// INVENTORY MANAGEMENT SYSTEM IMPLEMENTATION IN C++

#include <iostream>
#include <string>
#include <vector>


class Entity {
public:
    virtual void add(int id, const std::string& detail1, const std::string& detail2, const std::string& detail3, const std::string& detail4) = 0;
    virtual void edit(const std::string& detail1, const std::string& detail2, const std::string& detail3) = 0;
    virtual void deleteEntity() = 0;
    virtual void search(int id) const = 0;
};

// Permission class
class Permission : public Entity {
private:
    int permission_id;
    int permission_role_id;
    std::string permission_title;
    std::string permission_module;
    std::string permission_description;

public:
    void add(int id, const std::string& role_id, const std::string& title, const std::string& module, const std::string& description) override {
        permission_id = id;
        permission_role_id = std::stoi(role_id);
        permission_title = title;
        permission_module = module;
        permission_description = description;
    }

    void edit(const std::string& title, const std::string& module, const std::string& description) override {
        permission_title = title;
        permission_module = module;
        permission_description = description;
    }

    void deleteEntity() override {
        permission_id = -1;
        permission_role_id = -1;
        permission_title.clear();
        permission_module.clear();
        permission_description.clear();
    }

    void search(int id) const override {
        if (permission_id == id) {
            std::cout << "Permission ID: " << permission_id << "\n";
            std::cout << "Role ID: " << permission_role_id << "\n";
            std::cout << "Title: " << permission_title << "\n";
            std::cout << "Module: " << permission_module << "\n";
            std::cout << "Description: " << permission_description << "\n";
        } else {
            std::cout << "Permission not found.\n";
        }
    }
};

// Role class
class Role : public Entity {
private:
    int role_id;
    std::string role_title;
    std::string role_description;

public:
    void add(int id, const std::string& detail1, const std::string& title, const std::string& description, const std::string& detail4) override {
        role_id = id;
        role_title = title;
        role_description = description;
    }

    void edit(const std::string& title, const std::string& description, const std::string&) override {
        role_title = title;
        role_description = description;
    }

    void deleteEntity() override {
        role_id = -1;
        role_title.clear();
        role_description.clear();
    }

    void search(int id) const override {
        if (role_id == id) {
            std::cout << "Role ID: " << role_id << "\n";
            std::cout << "Title: " << role_title << "\n";
            std::cout << "Description: " << role_description << "\n";
        } else {
            std::cout << "Role not found.\n";
        }
    }
};

// User class
class User : public Entity {
private:
    int user_id;
    int user_role_id;
    std::string user_name;
    std::string user_email;
    std::string user_dob;
    std::string user_address;

public:
    void add(int id, const std::string& role_id, const std::string& name, const std::string& email, const std::string& dob) override {
        user_id = id;
        user_role_id = std::stoi(role_id);
        user_name = name;
        user_email = email;
        user_dob = dob;
    }

    void edit(const std::string& name, const std::string& email, const std::string& address) override {
        user_name = name;
        user_email = email;
        user_address = address;
    }

    void deleteEntity() override {
        user_id = -1;
        user_role_id = -1;
        user_name.clear();
        user_email.clear();
        user_dob.clear();
        user_address.clear();
    }

    void search(int id) const override {
        if (user_id == id) {
            std::cout << "User ID: " << user_id << "\n";
            std::cout << "Role ID: " << user_role_id << "\n";
            std::cout << "Name: " << user_name << "\n";
            std::cout << "Email: " << user_email << "\n";
            std::cout << "DOB: " << user_dob << "\n";
            std::cout << "Address: " << user_address << "\n";
        } else {
            std::cout << "User not found.\n";
        }
    }
};

// Customer class
class Customer : public Entity {
private:
    int customer_id;
    std::string customer_name;
    std::string customer_mobile;
    std::string customer_email;
    std::string customer_address;
    std::string customer_username;
    std::string customer_password;

public:
    void add(int id, const std::string& name, const std::string& mobile, const std::string& email, const std::string& address) override {
        customer_id = id;
        customer_name = name;
        customer_mobile = mobile;
        customer_email = email;
        customer_address = address;
    }

    void edit(const std::string& name, const std::string& mobile, const std::string& email) override {
        customer_name = name;
        customer_mobile = mobile;
        customer_email = email;
    }

    void deleteEntity() override {
        customer_id = -1;
        customer_name.clear();
        customer_mobile.clear();
        customer_email.clear();
        customer_address.clear();
        customer_username.clear();
        customer_password.clear();
    }

    void search(int id) const override {
        if (customer_id == id) {
            std::cout << "Customer ID: " << customer_id << "\n";
            std::cout << "Name: " << customer_name << "\n";
            std::cout << "Mobile: " << customer_mobile << "\n";
            std::cout << "Email: " << customer_email << "\n";
            std::cout << "Address: " << customer_address << "\n";
        } else {
            std::cout << "Customer not found.\n";
        }
    }
};

// Supplier class
class Supplier : public Entity {
private:
    int supplier_id;
    std::string supplier_mobile;
    std::string supplier_name;
    std::string supplier_email;
    std::string supplier_address;
    std::string supplier_username;
    std::string supplier_password;

public:
    void add(int id, const std::string& mobile, const std::string& name, const std::string& email, const std::string& address) override {
        supplier_id = id;
        supplier_mobile = mobile;
        supplier_name = name;
        supplier_email = email;
        supplier_address = address;
    }

    void edit(const std::string& mobile, const std::string& name, const std::string& email) override {
        supplier_mobile = mobile;
        supplier_name = name;
        supplier_email = email;
    }

    void deleteEntity() override {
        supplier_id = -1;
        supplier_mobile.clear();
        supplier_name.clear();
        supplier_email.clear();
        supplier_address.clear();
        supplier_username.clear();
        supplier_password.clear();
    }

    void search(int id) const override {
        if (supplier_id == id) {
            std::cout << "Supplier ID: " << supplier_id << "\n";
            std::cout << "Mobile: " << supplier_mobile << "\n";
            std::cout << "Name: " << supplier_name << "\n";
            std::cout << "Email: " << supplier_email << "\n";
            std::cout << "Address: " << supplier_address << "\n";
        } else {
            std::cout << "Supplier not found.\n";
        }
    }
};

// Sales class
class Sales : public Entity {
private:
    int sale_id;
    int sale_product_id;
    std::string sale_product_name;
    std::string sale_product_brand;
    int sale_quantity;
    std::string sale_rate;
    std::string sale_discount;
    std::string sale_amount;

public:
    void add(int id, const std::string& product_id, const std::string& name, const std::string& brand, const std::string& quantity) override {
        try {
            sale_id = id;
            sale_product_id = std::stoi(product_id);
            sale_product_name = name;
            sale_product_brand = brand;
            sale_quantity = std::stoi(quantity);
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    void edit(const std::string& name, const std::string& brand, const std::string& quantity) override {
        try {
            sale_product_name = name;
            sale_product_brand = brand;
            sale_quantity = std::stoi(quantity);
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    void deleteEntity() override {
        sale_id = -1;
        sale_product_id = -1;
        sale_product_name.clear();
        sale_product_brand.clear();
        sale_quantity = 0;
        sale_rate.clear();
        sale_discount.clear();
        sale_amount.clear();
    }

    void search(int id) const override {
        if (sale_id == id) {
            std::cout << "Sale ID: " << sale_id << "\n";
            std::cout << "Product ID: " << sale_product_id << "\n";
            std::cout << "Product Name: " << sale_product_name << "\n";
            std::cout << "Product Brand: " << sale_product_brand << "\n";
            std::cout << "Quantity: " << sale_quantity << "\n";
        } else {
            std::cout << "Sale not found.\n";
        }
    }

    double calculateTotalAmount(const std::vector<Sales>& sales) const {
        try {
            double total = 0;
            for (const auto& sale : sales) {
                total += std::stod(sale.sale_amount);
            }
            return total;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
            return 0;
        }
    }
};
// Inventory class
class Inventory : public Entity {
private:
    int inventory_id;
    std::string inventory_name;
    std::string inventory_description;
    std::string inventory_quantity;
    int inventory_price;

public:
    void add(int id, const std::string& name, const std::string& description, const std::string& quantity, const std::string& price) override {
        inventory_id = id;
        inventory_name = name;
        inventory_description = description;
        inventory_quantity = quantity;
        inventory_price = std::stoi(price);
    }

    void edit(const std::string& name, const std::string& description, const std::string& quantity) override {
        inventory_name = name;
        inventory_description = description;
        inventory_quantity = quantity;
    }

    void deleteEntity() override {
        inventory_id = -1;
        inventory_name.clear();
        inventory_description.clear();
        inventory_quantity.clear();
        inventory_price = 0;
    }

    void search(int id) const override {
        if (inventory_id == id) {
            std::cout << "Inventory ID: " << inventory_id << "\n";
            std::cout << "Name: " << inventory_name << "\n";
            std::cout << "Description: " << inventory_description << "\n";
            std::cout << "Quantity: " << inventory_quantity << "\n";
            std::cout << "Price: " << inventory_price << "\n";
        } else {
            std::cout << "Inventory not found.\n";
        }
    }
};

class Purchase : public Entity {
private:
    int purchase_id;
    std::string purchase_amount;
    std::string purchase_type;
    std::string purchase_description;
    int purchase_supplier_id;

public:
    void add(int id, const std::string& amount, const std::string& type, const std::string& description, const std::string& supplier_id) override {
        try {
            purchase_id = id;
            purchase_amount = amount;
            purchase_type = type;
            purchase_description = description;
            purchase_supplier_id = std::stoi(supplier_id);
            if (purchase_supplier_id <= 0) {
                throw std::invalid_argument("Supplier ID must be a positive integer");
            }
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    void edit(const std::string& amount, const std::string& type, const std::string& description) override {
        try {
            purchase_amount = amount;
            purchase_type = type;
            purchase_description = description;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    void deleteEntity() override {
        try {
            purchase_id = -1;
            purchase_amount.clear();
            purchase_type.clear();
            purchase_description.clear();
            purchase_supplier_id = -1;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    void search(int id) const override {
        try {
            if (purchase_id == id) {
                std::cout << "Purchase ID: " << purchase_id << "\n";
                std::cout << "Amount: " << purchase_amount << "\n";
                std::cout << "Type: " << purchase_type << "\n";
                std::cout << "Description: " << purchase_description << "\n";
                std::cout << "Supplier ID: " << purchase_supplier_id << "\n";
            } else {
                std::cout << "Purchase not found.\n";
            }
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    double calculateTotalAmount(const std::vector<Purchase>& purchases) const {
        try {
            double total = 0;
            for (const auto& purchase : purchases) {
                total += std::stod(purchase.purchase_amount);
            }
            return total;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
            return 0;
        }
    }
};
// Menu functions for each entity
void permissionMenu(Permission& permission) {
    int choice;
    do {
        std::cout << "Permission Menu:\n";
        std::cout << "1. Add Permission\n";
        std::cout << "2. Edit Permission\n";
        std::cout << "3. Delete Permission\n";
        std::cout << "4. Search Permission\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id, role_id;
            std::string title, module, description;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Role ID: ";
            std::cin >> role_id;
            std::cout << "Enter Title: ";
            std::cin.ignore();
            std::getline(std::cin, title);
            std::cout << "Enter Module: ";
            std::getline(std::cin, module);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            permission.add(id, std::to_string(role_id), title, module, description);
            break;
        }
        case 2: {
            std::string title, module, description;
            std::cout << "Enter Title: ";
            std::cin.ignore();
            std::getline(std::cin, title);
            std::cout << "Enter Module: ";
            std::getline(std::cin, module);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            permission.edit(title, module, description);
            break;
        }
        case 3:
            permission.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            permission.search(id);
            break;
        }
        }
    } while (choice != 0);
}

void roleMenu(Role& role) {
    int choice;
    do {
        std::cout << "Role Menu:\n";
        std::cout << "1. Add Role\n";
        std::cout << "2. Edit Role\n";
        std::cout << "3. Delete Role\n";
        std::cout << "4. Search Role\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id;
            std::string title, description;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Title: ";
            std::cin.ignore();
            std::getline(std::cin, title);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            role.add(id, "", title, description, "");
            break;
        }
        case 2: {
            std::string title, description;
            std::cout << "Enter Title: ";
            std::cin.ignore();
            std::getline(std::cin, title);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            role.edit(title, description, "");
            break;
        }
        case 3:
            role.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            role.search(id);
            break;
        }
        }
    } while (choice != 0);
}

void userMenu(User& user) {
    int choice;
    do {
        std::cout << "User Menu:\n";
        std::cout << "1. Add User\n";
        std::cout << "2. Edit User\n";
        std::cout << "3. Delete User\n";
        std::cout << "4. Search User\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id, role_id;
            std::string name, email, dob, address;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Role ID: ";
            std::cin >> role_id;
            std::cout << "Enter Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Email: ";
            std::getline(std::cin, email);
            std::cout << "Enter DOB: ";
            std::getline(std::cin, dob);
            std::cout << "Enter Address: ";
            std::getline(std::cin, address);
            user.add(id, std::to_string(role_id), name, email, dob);
            break;
        }
        case 2: {
            std::string name, email, address;
            std::cout << "Enter Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Email: ";
            std::getline(std::cin, email);
            std::cout << "Enter Address: ";
            std::getline(std::cin, address);
            user.edit(name, email, address);
            break;
        }
        case 3:
            user.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            user.search(id);
            break;
        }
        }
    } while (choice != 0);
}

void customerMenu(Customer& customer) {
    int choice;
    do {
        std::cout << "Customer Menu:\n";
        std::cout << "1. Add Customer\n";
        std::cout << "2. Edit Customer\n";
        std::cout << "3. Delete Customer\n";
        std::cout << "4. Search Customer\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id;
            std::string name, mobile, email, address;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Mobile: ";
            std::getline(std::cin, mobile);
            std::cout << "Enter Email: ";
            std::getline(std::cin, email);
            std::cout << "Enter Address: ";
            std::getline(std::cin, address);
            customer.add(id, name, mobile, email, address);
            break;
        }
        case 2: {
            std::string name, mobile, email;
            std::cout << "Enter Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Mobile: ";
            std::getline(std::cin, mobile);
            std::cout << "Enter Email: ";
            std::getline(std::cin, email);
            customer.edit(name, mobile, email);
            break;
        }
        case 3:
            customer.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            customer.search(id);
            break;
        }
        }
    } while (choice != 0);
}

void supplierMenu(Supplier& supplier) {
    int choice;
    do {
        std::cout << "Supplier Menu:\n";
        std::cout << "1. Add Supplier\n";
        std::cout << "2. Edit Supplier\n";
        std::cout << "3. Delete Supplier\n";
        std::cout << "4. Search Supplier\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id;
            std::string mobile, name, email, address;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Mobile: ";
            std::cin.ignore();
            std::getline(std::cin, mobile);
            std::cout << "Enter Name: ";
            std::getline(std::cin, name);
            std::cout << "Enter Email: ";
            std::getline(std::cin, email);
            std::cout << "Enter Address: ";
            std::getline(std::cin, address);
            supplier.add(id, mobile, name, email, address);
            break;
        }
        case 2: {
            std::string mobile, name, email;
            std::cout << "Enter Mobile: ";
            std::cin.ignore();
            std::getline(std::cin, mobile);
            std::cout << "Enter Name: ";
            std::getline(std::cin, name);
            std::cout << "Enter Email: ";
            std::getline(std::cin, email);
            supplier.edit(mobile, name, email);
            break;
        }
        case 3:
            supplier.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            supplier.search(id);
            break;
        }
        }
    } while (choice != 0);
}

void salesMenu(Sales& sales) {
    int choice;
    do {
        std::cout << "Sales Menu:\n";
        std::cout << "1. Add Sale\n";
        std::cout << "2. Edit Sale\n";
        std::cout << "3. Delete Sale\n";
        std::cout << "4. Search Sale\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id, product_id;
            std::string name, brand, quantity;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Product ID: ";
            std::cin >> product_id;
            std::cout << "Enter Product Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Product Brand: ";
            std::getline(std::cin, brand);
            std::cout << "Enter Quantity: ";
            std::getline(std::cin, quantity);
            sales.add(id, std::to_string(product_id), name, brand, quantity);
            break;
        }
        case 2: {
            std::string name, brand, quantity;
            std::cout << "Enter Product Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Product Brand: ";
            std::getline(std::cin, brand);
            std::cout << "Enter Quantity: ";
            std::getline(std::cin, quantity);
            sales.edit(name, brand, quantity);
            break;
        }
        case 3:
            sales.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            sales.search(id);
            break;
        }
        }
    } while (choice != 0);
}

void inventoryMenu(Inventory& inventory) {
    int choice;
    do {
        std::cout << "Inventory Menu:\n";
        std::cout << "1. Add Inventory\n";
        std::cout << "2. Edit Inventory\n";
        std::cout << "3. Delete Inventory\n";
        std::cout << "4. Search Inventory\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id, price;
            std::string name, description, quantity;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            std::cout << "Enter Quantity: ";
            std::getline(std::cin, quantity);
            std::cout << "Enter Price: ";
            std::cin >> price;
            inventory.add(id, name, description, quantity, std::to_string(price));
            break;
        }
        case 2: {
            std::string name, description, quantity;
            std::cout << "Enter Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            std::cout << "Enter Quantity: ";
            std::getline(std::cin, quantity);
            inventory.edit(name, description, quantity);
            break;
        }
        case 3:
            inventory.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            inventory.search(id);
            break;
        }
        }
    } while (choice != 0);
}

void purchaseMenu(Purchase& purchase, std::vector<Purchase>& purchaseList) {
    int choice;
    do {
        std::cout << "Purchase Menu:\n";
        std::cout << "1. Add Purchase\n";
        std::cout << "2. Edit Purchase\n";
        std::cout << "3. Delete Purchase\n";
        std::cout << "4. Search Purchase\n";
        std::cout << "5. Calculate Total Purchase Amount\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id, supplier_id;
            std::string amount, type, description;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Amount: ";
            std::cin.ignore();
            std::getline(std::cin, amount);
            std::cout << "Enter Type: ";
            std::getline(std::cin, type);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            std::cout << "Enter Supplier ID: ";
            std::cin >> supplier_id;
            purchase.add(id, amount, type, description, std::to_string(supplier_id));
            purchaseList.push_back(purchase);
            break;
        }
        case 2: {
            std::string amount, type, description;
            std::cout << "Enter Amount: ";
            std::cin.ignore();
            std::getline(std::cin, amount);
            std::cout << "Enter Type: ";
            std::getline(std::cin, type);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            purchase.edit(amount, type, description);
            break;
        }
        case 3:
            purchase.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            purchase.search(id);
            break;
        }
        case 5: {
            double totalAmount = purchase.calculateTotalAmount(purchaseList);
            std::cout << "Total Purchase Amount: " << totalAmount << "\n";
            break;
        }
        }
    } while (choice != 0);
}

// Main function
int main() {
    Permission permission;
    Role role;
    User user;
    Customer customer;
    Supplier supplier;
    Sales sales;
    Inventory inventory;
    Purchase purchase;
    std::vector<Purchase> purchaseList;

    int choice;
    do {
        std::cout << "Main Menu:\n";
        std::cout << "1. Permission\n";
        std::cout << "2. Role\n";
        std::cout << "3. User\n";
        std::cout << "4. Customer\n";
        std::cout << "5. Supplier\n";
        std::cout << "6. Sales\n";
        std::cout << "7. Inventory\n";
        std::cout << "8. Purchase\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1:
            permissionMenu(permission);
            break;
        case 2:
            roleMenu(role);
            break;
        case 3:
            userMenu(user);
            break;
        case 4:
            customerMenu(customer);
            break;
        case 5:
            supplierMenu(supplier);
            break;
        case 6:
            salesMenu(sales);
            break;
        case 7:
            inventoryMenu(inventory);
            break;
        case 8:
            purchaseMenu(purchase, purchaseList);
            break;
        }
    } while (choice != 0);

    return 0;
}



        #include <iostream>
#include <string>
#include <vector>


class Entity {
public:
    virtual void add(int id, const std::string& detail1, const std::string& detail2, const std::string& detail3, const std::string& detail4) = 0;
    virtual void edit(const std::string& detail1, const std::string& detail2, const std::string& detail3) = 0;
    virtual void deleteEntity() = 0;
    virtual void search(int id) const = 0;
};

// Permission class
class Permission : public Entity {
private:
    int permission_id;
    int permission_role_id;
    std::string permission_title;
    std::string permission_module;
    std::string permission_description;

public:
    void add(int id, const std::string& role_id, const std::string& title, const std::string& module, const std::string& description) override {
        permission_id = id;
        permission_role_id = std::stoi(role_id);
        permission_title = title;
        permission_module = module;
        permission_description = description;
    }

    void edit(const std::string& title, const std::string& module, const std::string& description) override {
        permission_title = title;
        permission_module = module;
        permission_description = description;
    }

    void deleteEntity() override {
        permission_id = -1;
        permission_role_id = -1;
        permission_title.clear();
        permission_module.clear();
        permission_description.clear();
    }

    void search(int id) const override {
        if (permission_id == id) {
            std::cout << "Permission ID: " << permission_id << "\n";
            std::cout << "Role ID: " << permission_role_id << "\n";
            std::cout << "Title: " << permission_title << "\n";
            std::cout << "Module: " << permission_module << "\n";
            std::cout << "Description: " << permission_description << "\n";
        } else {
            std::cout << "Permission not found.\n";
        }
    }
};

// Role class
class Role : public Entity {
private:
    int role_id;
    std::string role_title;
    std::string role_description;

public:
    void add(int id, const std::string& detail1, const std::string& title, const std::string& description, const std::string& detail4) override {
        role_id = id;
        role_title = title;
        role_description = description;
    }

    void edit(const std::string& title, const std::string& description, const std::string&) override {
        role_title = title;
        role_description = description;
    }

    void deleteEntity() override {
        role_id = -1;
        role_title.clear();
        role_description.clear();
    }

    void search(int id) const override {
        if (role_id == id) {
            std::cout << "Role ID: " << role_id << "\n";
            std::cout << "Title: " << role_title << "\n";
            std::cout << "Description: " << role_description << "\n";
        } else {
            std::cout << "Role not found.\n";
        }
    }
};

// User class
class User : public Entity {
private:
    int user_id;
    int user_role_id;
    std::string user_name;
    std::string user_email;
    std::string user_dob;
    std::string user_address;

public:
    void add(int id, const std::string& role_id, const std::string& name, const std::string& email, const std::string& dob) override {
        user_id = id;
        user_role_id = std::stoi(role_id);
        user_name = name;
        user_email = email;
        user_dob = dob;
    }

    void edit(const std::string& name, const std::string& email, const std::string& address) override {
        user_name = name;
        user_email = email;
        user_address = address;
    }

    void deleteEntity() override {
        user_id = -1;
        user_role_id = -1;
        user_name.clear();
        user_email.clear();
        user_dob.clear();
        user_address.clear();
    }

    void search(int id) const override {
        if (user_id == id) {
            std::cout << "User ID: " << user_id << "\n";
            std::cout << "Role ID: " << user_role_id << "\n";
            std::cout << "Name: " << user_name << "\n";
            std::cout << "Email: " << user_email << "\n";
            std::cout << "DOB: " << user_dob << "\n";
            std::cout << "Address: " << user_address << "\n";
        } else {
            std::cout << "User not found.\n";
        }
    }
};

// Customer class
class Customer : public Entity {
private:
    int customer_id;
    std::string customer_name;
    std::string customer_mobile;
    std::string customer_email;
    std::string customer_address;
    std::string customer_username;
    std::string customer_password;

public:
    void add(int id, const std::string& name, const std::string& mobile, const std::string& email, const std::string& address) override {
        customer_id = id;
        customer_name = name;
        customer_mobile = mobile;
        customer_email = email;
        customer_address = address;
    }

    void edit(const std::string& name, const std::string& mobile, const std::string& email) override {
        customer_name = name;
        customer_mobile = mobile;
        customer_email = email;
    }

    void deleteEntity() override {
        customer_id = -1;
        customer_name.clear();
        customer_mobile.clear();
        customer_email.clear();
        customer_address.clear();
        customer_username.clear();
        customer_password.clear();
    }

    void search(int id) const override {
        if (customer_id == id) {
            std::cout << "Customer ID: " << customer_id << "\n";
            std::cout << "Name: " << customer_name << "\n";
            std::cout << "Mobile: " << customer_mobile << "\n";
            std::cout << "Email: " << customer_email << "\n";
            std::cout << "Address: " << customer_address << "\n";
        } else {
            std::cout << "Customer not found.\n";
        }
    }
};

// Supplier class
class Supplier : public Entity {
private:
    int supplier_id;
    std::string supplier_mobile;
    std::string supplier_name;
    std::string supplier_email;
    std::string supplier_address;
    std::string supplier_username;
    std::string supplier_password;

public:
    void add(int id, const std::string& mobile, const std::string& name, const std::string& email, const std::string& address) override {
        supplier_id = id;
        supplier_mobile = mobile;
        supplier_name = name;
        supplier_email = email;
        supplier_address = address;
    }

    void edit(const std::string& mobile, const std::string& name, const std::string& email) override {
        supplier_mobile = mobile;
        supplier_name = name;
        supplier_email = email;
    }

    void deleteEntity() override {
        supplier_id = -1;
        supplier_mobile.clear();
        supplier_name.clear();
        supplier_email.clear();
        supplier_address.clear();
        supplier_username.clear();
        supplier_password.clear();
    }

    void search(int id) const override {
        if (supplier_id == id) {
            std::cout << "Supplier ID: " << supplier_id << "\n";
            std::cout << "Mobile: " << supplier_mobile << "\n";
            std::cout << "Name: " << supplier_name << "\n";
            std::cout << "Email: " << supplier_email << "\n";
            std::cout << "Address: " << supplier_address << "\n";
        } else {
            std::cout << "Supplier not found.\n";
        }
    }
};

// Sales class
class Sales : public Entity {
private:
    int sale_id;
    int sale_product_id;
    std::string sale_product_name;
    std::string sale_product_brand;
    int sale_quantity;
    std::string sale_rate;
    std::string sale_discount;
    std::string sale_amount;

public:
    void add(int id, const std::string& product_id, const std::string& name, const std::string& brand, const std::string& quantity) override {
        try {
            sale_id = id;
            sale_product_id = std::stoi(product_id);
            sale_product_name = name;
            sale_product_brand = brand;
            sale_quantity = std::stoi(quantity);
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    void edit(const std::string& name, const std::string& brand, const std::string& quantity) override {
        try {
            sale_product_name = name;
            sale_product_brand = brand;
            sale_quantity = std::stoi(quantity);
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    void deleteEntity() override {
        sale_id = -1;
        sale_product_id = -1;
        sale_product_name.clear();
        sale_product_brand.clear();
        sale_quantity = 0;
        sale_rate.clear();
        sale_discount.clear();
        sale_amount.clear();
    }

    void search(int id) const override {
        if (sale_id == id) {
            std::cout << "Sale ID: " << sale_id << "\n";
            std::cout << "Product ID: " << sale_product_id << "\n";
            std::cout << "Product Name: " << sale_product_name << "\n";
            std::cout << "Product Brand: " << sale_product_brand << "\n";
            std::cout << "Quantity: " << sale_quantity << "\n";
        } else {
            std::cout << "Sale not found.\n";
        }
    }

    double calculateTotalAmount(const std::vector<Sales>& sales) const {
        try {
            double total = 0;
            for (const auto& sale : sales) {
                total += std::stod(sale.sale_amount);
            }
            return total;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
            return 0;
        }
    }
};
// Inventory class
class Inventory : public Entity {
private:
    int inventory_id;
    std::string inventory_name;
    std::string inventory_description;
    std::string inventory_quantity;
    int inventory_price;

public:
    void add(int id, const std::string& name, const std::string& description, const std::string& quantity, const std::string& price) override {
        inventory_id = id;
        inventory_name = name;
        inventory_description = description;
        inventory_quantity = quantity;
        inventory_price = std::stoi(price);
    }

    void edit(const std::string& name, const std::string& description, const std::string& quantity) override {
        inventory_name = name;
        inventory_description = description;
        inventory_quantity = quantity;
    }

    void deleteEntity() override {
        inventory_id = -1;
        inventory_name.clear();
        inventory_description.clear();
        inventory_quantity.clear();
        inventory_price = 0;
    }

    void search(int id) const override {
        if (inventory_id == id) {
            std::cout << "Inventory ID: " << inventory_id << "\n";
            std::cout << "Name: " << inventory_name << "\n";
            std::cout << "Description: " << inventory_description << "\n";
            std::cout << "Quantity: " << inventory_quantity << "\n";
            std::cout << "Price: " << inventory_price << "\n";
        } else {
            std::cout << "Inventory not found.\n";
        }
    }
};

class Purchase : public Entity {
private:
    int purchase_id;
    std::string purchase_amount;
    std::string purchase_type;
    std::string purchase_description;
    int purchase_supplier_id;

public:
    void add(int id, const std::string& amount, const std::string& type, const std::string& description, const std::string& supplier_id) override {
        try {
            purchase_id = id;
            purchase_amount = amount;
            purchase_type = type;
            purchase_description = description;
            purchase_supplier_id = std::stoi(supplier_id);
            if (purchase_supplier_id <= 0) {
                throw std::invalid_argument("Supplier ID must be a positive integer");
            }
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    void edit(const std::string& amount, const std::string& type, const std::string& description) override {
        try {
            purchase_amount = amount;
            purchase_type = type;
            purchase_description = description;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    void deleteEntity() override {
        try {
            purchase_id = -1;
            purchase_amount.clear();
            purchase_type.clear();
            purchase_description.clear();
            purchase_supplier_id = -1;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    void search(int id) const override {
        try {
            if (purchase_id == id) {
                std::cout << "Purchase ID: " << purchase_id << "\n";
                std::cout << "Amount: " << purchase_amount << "\n";
                std::cout << "Type: " << purchase_type << "\n";
                std::cout << "Description: " << purchase_description << "\n";
                std::cout << "Supplier ID: " << purchase_supplier_id << "\n";
            } else {
                std::cout << "Purchase not found.\n";
            }
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    double calculateTotalAmount(const std::vector<Purchase>& purchases) const {
        try {
            double total = 0;
            for (const auto& purchase : purchases) {
                total += std::stod(purchase.purchase_amount);
            }
            return total;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
            return 0;
        }
    }
};
// Menu functions for each entity
void permissionMenu(Permission& permission) {
    int choice;
    do {
        std::cout << "Permission Menu:\n";
        std::cout << "1. Add Permission\n";
        std::cout << "2. Edit Permission\n";
        std::cout << "3. Delete Permission\n";
        std::cout << "4. Search Permission\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id, role_id;
            std::string title, module, description;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Role ID: ";
            std::cin >> role_id;
            std::cout << "Enter Title: ";
            std::cin.ignore();
            std::getline(std::cin, title);
            std::cout << "Enter Module: ";
            std::getline(std::cin, module);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            permission.add(id, std::to_string(role_id), title, module, description);
            break;
        }
        case 2: {
            std::string title, module, description;
            std::cout << "Enter Title: ";
            std::cin.ignore();
            std::getline(std::cin, title);
            std::cout << "Enter Module: ";
            std::getline(std::cin, module);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            permission.edit(title, module, description);
            break;
        }
        case 3:
            permission.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            permission.search(id);
            break;
        }
        }
    } while (choice != 0);
}

void roleMenu(Role& role) {
    int choice;
    do {
        std::cout << "Role Menu:\n";
        std::cout << "1. Add Role\n";
        std::cout << "2. Edit Role\n";
        std::cout << "3. Delete Role\n";
        std::cout << "4. Search Role\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id;
            std::string title, description;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Title: ";
            std::cin.ignore();
            std::getline(std::cin, title);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            role.add(id, "", title, description, "");
            break;
        }
        case 2: {
            std::string title, description;
            std::cout << "Enter Title: ";
            std::cin.ignore();
            std::getline(std::cin, title);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            role.edit(title, description, "");
            break;
        }
        case 3:
            role.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            role.search(id);
            break;
        }
        }
    } while (choice != 0);
}

void userMenu(User& user) {
    int choice;
    do {
        std::cout << "User Menu:\n";
        std::cout << "1. Add User\n";
        std::cout << "2. Edit User\n";
        std::cout << "3. Delete User\n";
        std::cout << "4. Search User\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id, role_id;
            std::string name, email, dob, address;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Role ID: ";
            std::cin >> role_id;
            std::cout << "Enter Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Email: ";
            std::getline(std::cin, email);
            std::cout << "Enter DOB: ";
            std::getline(std::cin, dob);
            std::cout << "Enter Address: ";
            std::getline(std::cin, address);
            user.add(id, std::to_string(role_id), name, email, dob);
            break;
        }
        case 2: {
            std::string name, email, address;
            std::cout << "Enter Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Email: ";
            std::getline(std::cin, email);
            std::cout << "Enter Address: ";
            std::getline(std::cin, address);
            user.edit(name, email, address);
            break;
        }
        case 3:
            user.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            user.search(id);
            break;
        }
        }
    } while (choice != 0);
}

void customerMenu(Customer& customer) {
    int choice;
    do {
        std::cout << "Customer Menu:\n";
        std::cout << "1. Add Customer\n";
        std::cout << "2. Edit Customer\n";
        std::cout << "3. Delete Customer\n";
        std::cout << "4. Search Customer\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id;
            std::string name, mobile, email, address;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Mobile: ";
            std::getline(std::cin, mobile);
            std::cout << "Enter Email: ";
            std::getline(std::cin, email);
            std::cout << "Enter Address: ";
            std::getline(std::cin, address);
            customer.add(id, name, mobile, email, address);
            break;
        }
        case 2: {
            std::string name, mobile, email;
            std::cout << "Enter Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Mobile: ";
            std::getline(std::cin, mobile);
            std::cout << "Enter Email: ";
            std::getline(std::cin, email);
            customer.edit(name, mobile, email);
            break;
        }
        case 3:
            customer.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            customer.search(id);
            break;
        }
        }
    } while (choice != 0);
}

void supplierMenu(Supplier& supplier) {
    int choice;
    do {
        std::cout << "Supplier Menu:\n";
        std::cout << "1. Add Supplier\n";
        std::cout << "2. Edit Supplier\n";
        std::cout << "3. Delete Supplier\n";
        std::cout << "4. Search Supplier\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id;
            std::string mobile, name, email, address;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Mobile: ";
            std::cin.ignore();
            std::getline(std::cin, mobile);
            std::cout << "Enter Name: ";
            std::getline(std::cin, name);
            std::cout << "Enter Email: ";
            std::getline(std::cin, email);
            std::cout << "Enter Address: ";
            std::getline(std::cin, address);
            supplier.add(id, mobile, name, email, address);
            break;
        }
        case 2: {
            std::string mobile, name, email;
            std::cout << "Enter Mobile: ";
            std::cin.ignore();
            std::getline(std::cin, mobile);
            std::cout << "Enter Name: ";
            std::getline(std::cin, name);
            std::cout << "Enter Email: ";
            std::getline(std::cin, email);
            supplier.edit(mobile, name, email);
            break;
        }
        case 3:
            supplier.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            supplier.search(id);
            break;
        }
        }
    } while (choice != 0);
}

void salesMenu(Sales& sales) {
    int choice;
    do {
        std::cout << "Sales Menu:\n";
        std::cout << "1. Add Sale\n";
        std::cout << "2. Edit Sale\n";
        std::cout << "3. Delete Sale\n";
        std::cout << "4. Search Sale\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id, product_id;
            std::string name, brand, quantity;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Product ID: ";
            std::cin >> product_id;
            std::cout << "Enter Product Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Product Brand: ";
            std::getline(std::cin, brand);
            std::cout << "Enter Quantity: ";
            std::getline(std::cin, quantity);
            sales.add(id, std::to_string(product_id), name, brand, quantity);
            break;
        }
        case 2: {
            std::string name, brand, quantity;
            std::cout << "Enter Product Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Product Brand: ";
            std::getline(std::cin, brand);
            std::cout << "Enter Quantity: ";
            std::getline(std::cin, quantity);
            sales.edit(name, brand, quantity);
            break;
        }
        case 3:
            sales.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            sales.search(id);
            break;
        }
        }
    } while (choice != 0);
}

void inventoryMenu(Inventory& inventory) {
    int choice;
    do {
        std::cout << "Inventory Menu:\n";
        std::cout << "1. Add Inventory\n";
        std::cout << "2. Edit Inventory\n";
        std::cout << "3. Delete Inventory\n";
        std::cout << "4. Search Inventory\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id, price;
            std::string name, description, quantity;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            std::cout << "Enter Quantity: ";
            std::getline(std::cin, quantity);
            std::cout << "Enter Price: ";
            std::cin >> price;
            inventory.add(id, name, description, quantity, std::to_string(price));
            break;
        }
        case 2: {
            std::string name, description, quantity;
            std::cout << "Enter Name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            std::cout << "Enter Quantity: ";
            std::getline(std::cin, quantity);
            inventory.edit(name, description, quantity);
            break;
        }
        case 3:
            inventory.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            inventory.search(id);
            break;
        }
        }
    } while (choice != 0);
}

void purchaseMenu(Purchase& purchase, std::vector<Purchase>& purchaseList) {
    int choice;
    do {
        std::cout << "Purchase Menu:\n";
        std::cout << "1. Add Purchase\n";
        std::cout << "2. Edit Purchase\n";
        std::cout << "3. Delete Purchase\n";
        std::cout << "4. Search Purchase\n";
        std::cout << "5. Calculate Total Purchase Amount\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: {
            int id, supplier_id;
            std::string amount, type, description;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Amount: ";
            std::cin.ignore();
            std::getline(std::cin, amount);
            std::cout << "Enter Type: ";
            std::getline(std::cin, type);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            std::cout << "Enter Supplier ID: ";
            std::cin >> supplier_id;
            purchase.add(id, amount, type, description, std::to_string(supplier_id));
            purchaseList.push_back(purchase);
            break;
        }
        case 2: {
            std::string amount, type, description;
            std::cout << "Enter Amount: ";
            std::cin.ignore();
            std::getline(std::cin, amount);
            std::cout << "Enter Type: ";
            std::getline(std::cin, type);
            std::cout << "Enter Description: ";
            std::getline(std::cin, description);
            purchase.edit(amount, type, description);
            break;
        }
        case 3:
            purchase.deleteEntity();
            break;
        case 4: {
            int id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            purchase.search(id);
            break;
        }
        case 5: {
            double totalAmount = purchase.calculateTotalAmount(purchaseList);
            std::cout << "Total Purchase Amount: " << totalAmount << "\n";
            break;
        }
        }
    } while (choice != 0);
}

// Main function
int main() {
    Permission permission;
    Role role;
    User user;
    Customer customer;
    Supplier supplier;
    Sales sales;
    Inventory inventory;
    Purchase purchase;
    std::vector<Purchase> purchaseList;

    int choice;
    do {
        std::cout << "Main Menu:\n";
        std::cout << "1. Permission\n";
        std::cout << "2. Role\n";
        std::cout << "3. User\n";
        std::cout << "4. Customer\n";
        std::cout << "5. Supplier\n";
        std::cout << "6. Sales\n";
        std::cout << "7. Inventory\n";
        std::cout << "8. Purchase\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1:
            permissionMenu(permission);
            break;
        case 2:
            roleMenu(role);
            break;
        case 3:
            userMenu(user);
            break;
        case 4:
            customerMenu(customer);
            break;
        case 5:
            supplierMenu(supplier);
            break;
        case 6:
            salesMenu(sales);
            break;
        case 7:
            inventoryMenu(inventory);
            break;
        case 8:
            purchaseMenu(purchase, purchaseList);
            break;
        }
    } while (choice != 0);

    return 0;
}
