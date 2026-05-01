
# Patent Approval ![C](https://img.shields.io/badge/language-C-blue.svg)

This repository contains the patent validation and approval system, developed in **C**. The software automates the verification of technical, financial, and inventor history criteria to determine if a patent is eligible.

## 📋 Approval Criteria

Approval is governed by a hierarchy of rules:

### 1. Mandatory Requirements

For any further review, the patent must meet the following requirements:

* **Documentation:** The prototype must have complete documentation.
* **Financial:** All submission fees must be duly paid.

### 2. Validation by Technical Area

If the mandatory requirements are met, approval proceeds by area:

* **Biotechnology:** Requires an International Certificate **OR** approval from 2 specialized reviewers.
* **Engineering:** Requires approval from 1 specialized reviewer **AND** a duly validated prototype.

### 3. Experienced Inventor Rule (Fast Track)

Regardless of the field, the patent will be approved if:

* The inventor has **5 or more previously approved patents**.
* The last approved patent is valid for more than **25 years**.

---

## 💻 Implementation (C Language)

### Standard Libraries Used

* `<stdio.h>`
* `<stdbool.h>`
* `<locale.h>`

## 📝 Licença

Este projeto está sob a licença MIT.

Feito com ❤️ por **Igor Lucas** from Brazil.
