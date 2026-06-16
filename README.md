# 🏧 ATM Machine Simulation

A console-based ATM simulation built in C that supports deposits, withdrawals,
and balance checks with a PIN authentication system.

---

## 📸 Demo

```
==================================
       WELCOME TO PES BANK ATM
==================================

  Enter your PIN: ****
  ✅ PIN Correct! Access Granted.

==================================
           ATM MAIN MENU
==================================
  1. Check Balance
  2. Deposit Money
  3. Withdraw Money
  4. Exit
==================================
```

---

## ✨ Features

- 🔐 PIN protected login system
- 🚫 Locks after 3 wrong PIN attempts
- 💰 Check current account balance
- ➕ Deposit money into account
- ➖ Withdraw money with insufficient funds check
- 👋 Clean exit with a goodbye message

---

## 🛠️ Tech Stack

- **Language:** C
- **Compiler:** GCC

---

## 🚀 How to Run

### Step 1 — Clone the repository
```bash
git clone https://github.com/yourusername/atm-simulation
cd atm-simulation
```

### Step 2 — Compile the code
```bash
gcc atm.c -o atm
```

### Step 3 — Run the program
```bash
./atm
```

> 💡 Default PIN is `1234` and starting balance is `Rs. 5000`

---

## 📁 Project Structure

```
atm-simulation/
│
├── atm.c        # Main source code
└── README.md    # Project documentation
```

---

## 📚 What I Learned

- Using `switch-case` for menu-driven programs in C
- Writing and calling functions in C
- Handling invalid inputs and edge cases
- Using `#define` for constants
- Basic security logic with PIN attempts

---

## 🔮 Future Improvements

- [ ] Support multiple user accounts
- [ ] Save transaction history to a file
- [ ] Add mini statement feature
- [ ] Encrypt the PIN for better security

---

## 👨‍💻 Author

**Aarush vh**  
1st Year B.Tech — AIML | PES University  
GitHub: [@aarush-11-afk](https://github.com/aarush-11-afk);
