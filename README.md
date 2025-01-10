# **🧾 Simple Billing System in C**  

A beginner-friendly **C program** designed to log **customer details**, record **purchased items**, and generate an itemized **bill** in the terminal. Let’s dive into the features! 🛒💻  

---

## **✨ Key Features**  

🔹 **Effortless Input**  
- Collect **customer details** like name and address 📝.  
- Add multiple **items** with their names and prices 🛍️💵.  

🔹 **Neat Bill Generation**  
- Displays a **formatted bill** with:  
  - 🆔 **Item ID**  
  - 🛒 **Item Name**  
  - 💲 **Item Price**  
- Automatically calculates the **total cost**! 🧮  

🔹 **Quick & Clear Output**  
- Provides a user-friendly bill layout for fast review 🖥️✅.  

---

## **📂 Project Structure**  

```plaintext  
/BillingSystem  
└── billing_system.c  
```  

---

## **🚀 Running the Program**  

### Requirements:  
1. A **C compiler** like GCC.  

### Steps:  
1. Save the code as `billing_system.c`.  
2. Open your terminal and navigate to the file directory 📂.  
3. Compile the code:  
   ```bash  
   gcc billing_system.c -o billing_system  
   ```  
4. Run the program:  
   ```bash  
   ./billing_system  
   ```  
5. Follow on-screen prompts to input:  
   - Customer **name and address** 🏠.  
   - Details of **items** (names and prices).  

---

## **🖥️ Example Usage**  

### **Input:**  
```plaintext  
Enter customer name: Alex  
Enter customer address: Green Street  
Enter total items: 2  

Enter 1 item name: Coffee  
Enter price: 50  
Enter 2 item name: Cookies  
Enter price: 30  
```  

### **Output:**  
```plaintext  
          🧾 Simple Billing System  
          -------------------------  

Customer: Alex         Address: Green Street  

ID: 1    Name: Coffee     Price: 50  
------------------------------------------------  
ID: 2    Name: Cookies    Price: 30  
------------------------------------------------  
                    Total: 80 💵  

     Thank You for Shopping with Us! 🙏  
```  

---

## **💡 Future Enhancements**  

✨ **Add Taxes**: Include tax calculations for each item 🏷️.  
✨ **Discounts**: Enable user-defined discounts 🎁.  
✨ **Save Bills**: Save bills to text files for future reference 📄.  
✨ **Interactive UI**: Use libraries like `ncurses` for a better interface 🎨.  
✨ **Customer History**: Maintain purchase records 📊.  

--- 

