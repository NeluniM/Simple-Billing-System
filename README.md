# **🧾 Simple Billing System in C**

Here's a beginner-friendly **C program** designed for seamless **customer management**, recording **purchases**, and generating a neat **bill** in your terminal. Let’s explore its fantastic features! 🛍️💻  

---

## **✨ Features**  

📝 **Hassle-Free Input**  
- Quickly enter **customer name** and **address**.  
- Easily log multiple **items** with names and prices.  

💵 **Automated Billing**  
- Generates a **detailed breakdown**, including:  
  - 🆔 **Item IDs**  
  - 🛒 **Item Names**  
  - 💲 **Prices**  
- Calculates and displays the **total cost** instantly.  

✅ **Clean, Readable Output**  
- Presents a neatly formatted **bill** for convenience.  

---

## **📂 File Organization**  

```plaintext  
/BillingSystem  
└── billing_system.c  
```  

---

## **🚀 How to Run**  

### Prerequisites:  
1. A working **C compiler** like GCC.  

### Steps:  
1. Save the program as `billing_system.c`.  
2. Open a terminal, and go to the file's location.  
3. Compile the program:  
   ```bash  
   gcc billing_system.c -o billing_system  
   ```  
4. Run the compiled program:  
   ```bash  
   ./billing_system  
   ```  
5. Follow the prompts to:  
   - Enter **customer details** (name and address).  
   - Input item **names** and **prices**.  

---

## **🖥️ Demo Example**  

### **Sample Input:**  
```plaintext  
Enter customer name: Alex  
Enter customer address: Maple Street  
Enter total items: 2  

Enter 1 item name: Notebook  
Enter price: 150  
Enter 2 item name: Marker  
Enter price: 50  
```  

### **Sample Output:**  
```plaintext  
          🧾 Simple Billing System  
          -------------------------  

Customer: Alex           Address: Maple Street  

ID: 1    Name: Notebook    Price: 150  
------------------------------------------------  
ID: 2    Name: Marker      Price: 50  
------------------------------------------------  
                    Total: 200 💰  

    🎉 Thank You for Shopping with Us! 🎉  
```  

---

## **🌟 Ideas for Future Upgrades**  

🔧 **Add Taxes and Discounts**  
   - Include tax rates and options for discounts.  

📄 **Save Bills as Files**  
   - Implement a feature to save bills for record-keeping.  

📊 **Customer Purchase Records**  
   - Maintain a database for customer history.  

🎨 **Enhanced User Interface**  
   - Use libraries like `ncurses` for a dynamic, interactive design.  

--- 
