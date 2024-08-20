# Inventory-Management-System
**Problem Definition (Description) :**
The project aims to develop a command-line interface (CLI) application designed to manage various system entities, including permissions, roles, users, customers, suppliers, sales, and inventory. The application will facilitate basic CRUD (Create, Read, Update, Delete) operations for each entity. Specifically, it will enable the addition, modification, deletion, and retrieval of permissions by `permission_id`, roles by `role_id`, users by `user_id`, customers by `customer_id`, suppliers by `supplier_id`, sales by `sale_id`, and inventory items by `inventory_id`. This robust system will help users efficiently manage and organize data related to these entities, ensuring streamlined operations within the system.

**List of objects identified**
•	Permission
•	Role
•	User
•	Customer
•	Supplier
•	Sale
•	Inventory
•	Purchase

**Description of each class**

**Permission:** This class likely represents a permission entity within the system, which defines what actions a user can perform, such as reading, writing, or deleting records. It probably includes properties to identify the type of permission and methods to check whether a user has a specific permission.

**Role:** This class represents a role in the system, which groups together a set of permissions. Roles are used to define what actions users can perform based on their role within the organization. The class likely includes properties for role identification and a collection of permissions, as well as methods to manage these permissions.

**User:** The User class represents a user in the system. It contains properties for user identification, personal details, and a reference to roles assigned to the user. This class manages user-specific data and actions they can perform based on their assigned roles.

**Customer:** This class represents a customer entity. It contains details about the customer such as name, contact information, and transaction history. The Customer class manages the data specific to customers and their interactions with the business.

**Supplier:** Similar to the Customer class, the Supplier class represents a supplier entity. It includes properties for supplier details, contact information, and transaction history. This class is used to manage the relationships and transactions between the business and its suppliers.

**Sale:** The Sale class represents a sale transaction. It includes details about the products sold, the customer, the date of the sale, and the total amount. This class manages the sales transactions within the system.

**Inventory: **The Inventory class represents the inventory of products available in the system. It includes properties for product identification, quantity, and location. This class manages stock levels, product details, and the organization of the inventory.

 **Main Function**
The `main` function in the given C++ program serves as the entry point and primary control mechanism for a menu-driven application that manages various entities such as permissions, roles, users, customers, suppliers, sales, inventory, and purchases. Initially, the function instantiates objects for `Permission`, `Role`, `User`, `Customer`, `Supplier`, `Sales`, `Inventory`, and `Purchase`, as well as a vector of `Purchase` objects named `purchaseList`.

The function enters a loop that repeatedly displays a main menu with options corresponding to different entities. The user is prompted to enter a choice, which is read into the `choice` variable. Depending on the user's input, a switch-case structure directs the flow of execution to specific functions that handle the respective menu options: `permissionMenu`, `roleMenu`, `userMenu`, `customerMenu`, `supplierMenu`, `salesMenu`, `inventoryMenu`, and `purchaseMenu`.

Each case in the switch statement calls the appropriate function and passes the relevant object(s) or data structures to it. For example, choosing the option for permissions calls `permissionMenu(permission)`, while choosing the purchase option calls `purchaseMenu(purchase, purchaseList)`.

The loop continues to display the menu and process user input until the user selects the exit option (choice `0`). At that point, the loop terminates, and the program exits gracefully by returning `0` from the `main` function, indicating successful execution.


**Use of Standard Design Patterns :**

**Command Pattern**
The Command Pattern is used to encapsulate all the details of a request as an object, thereby allowing users to parameterize clients with queues, requests, and operations. This pattern decouples the sender of a request from its receiver, which can be beneficial in handling operations and actions within a program.


