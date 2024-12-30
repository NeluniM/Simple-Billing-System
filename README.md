

# **🧾 Simple Billing System in C**  

The **Simple Billing System** is a beginner-friendly program written in **C** 🖥️ that helps users input **customer details**, log **purchased items** 🛒, and generate a clear, itemized bill 🧾 directly in the terminal.  

---

## **✨ Features**  

### 📝 **User-Friendly Input**  
- Input customer **name** 🧑‍💼 and **address** 🏠.  
- Record multiple **items** 🛍️ with their **names** 🏷️ and **prices** 💵.  

### 📊 **Detailed Bill Generation**  
- Create a structured bill including:  
  - 🆔 **Item ID**  
  - 🏷️ **Item Name**  
  - 💲 **Item Price**  
- Automatically calculate and display the **total amount** 💰.  

### 📋 **Clean Output**  
- Generate a **well-formatted bill** 🧾 that is easy to review and user-friendly.  

---

## **🛠️ Tools & Technologies**  

- **Programming Language:** C 💻  
- **Compiler:** GCC or any **standard C compiler** ⚙️  

---

## **📂 Project Structure**  

The program consists of a single source file:  
```
/BillingSystem  
└── billing_system.c  # Contains the entire program logic  
```  

---

## **🚀 How to Run the Program**  

### 📌 **Prerequisites**  
- Ensure you have a **C compiler** installed, like GCC.  

### 📋 **Steps**  

1. Save the program as `billing_system.c`.  
2. Open a **terminal** 🔲 and navigate to the file’s directory.  
3. Compile the code 🛠️:  
   ```bash  
   gcc billing_system.c -o billing_system  
   ```  
4. Execute the program ▶️:  
   ```bash  
   ./billing_system  
   ```  
5. Follow the on-screen prompts 🖱️ to input:  
   - **Customer details** 🧑‍💼.  
   - **Items** 🛒 and their **prices** 💵.  

---

## **💻 Example Interaction**  

### **User Input** 📝  
```  
Enter your name: Alice  
Enter your address: Green Street  
Enter total items: 2  

Enter 1 item name: Bread  
Enter price: 50  
Enter 2 item name: Milk  
Enter price: 30  
```  

### **Program Output** 📋  
```  
         🛍️ Simple Billing System  
         ------------------------  

Name: Alice      Address: Green Street  

Id: 1    Name: Bread     💲Price: 50  
------------------------------------------------  
Id: 2    Name: Milk      💲Price: 30  
------------------------------------------------  
                  🧾 Total: 80  

        🙏 Thank You for Shopping!  
```  

---

## **🔍 Key Concepts**  

### 🔹 **Core Features**  
- Leverages **structures**, **arrays**, and **basic input/output** operations.  
- Organizes **item and customer data** for a billing system.  

### 🔹 **Workflow**  
1. Collect **customer details** and **items with prices**.  
2. Store data in a **structured array** for easy management.  
3. Compute and display a formatted **bill with a total amount**.  

### 🔹 **Expandable Options**  
- Add **tax calculations** 📑 or **discounts** 🎁.  
- Save bills to a **file** 🗂️ for future reference.  

---

## **🔧 Future Enhancements**  

- **Tax & Discounts** 🧾: Add fields for calculating taxes or offering discounts 💸.  
- **File Saving** 💾: Save bills as **text files** for easy record-keeping.  
- **Customer History** 🗃️: Develop a **mini-database** for tracking purchase history.  
- **Enhanced UI** 🖌️: Use libraries like **ncurses** to design a visually appealing interface 🎨.  

---  
