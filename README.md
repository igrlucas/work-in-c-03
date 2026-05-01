# Patent Approval 💡![C](https://img.shields.io/badge/language-C-blue.svg)

Este repositório contém o sistema de validação e aprovação de patentes, desenvolvido em **C**. O software automatiza a verificação de critérios técnicos, financeiros e do histórico do inventor para determinar se uma patente é elegível.

## 📋 Critérios de Aprovação

A aprovação é regida por uma hierarquia de regras:

### 1. Requisitos Obrigatórios

Antes de qualquer revisão, a patente deve cumprir os seguintes pontos:

* **Documentação:** O protótipo deve ter documentação completa.
* **Financeiro:** Todas as taxas de submissão devem estar devidamente pagas.

### 2. Validação por Área Técnica

Se os requisitos obrigatórios forem atendidos, a aprovação segue por área:

* **Biotecnologia:** Requer um Certificado Internacional **OU** aprovação de 2 revisores especializados.
* **Engenharia:** Requer aprovação de 1 revisor especializado **E** um protótipo devidamente validado.

### 3. Regra do Inventor Experiente (Fast Track)

Independentemente da área, a patente será aprovada se:

* O inventor possuir **5 ou mais patentes aprovadas anteriormente**.
* A última patente aprovada for válida por mais de **25 anos**.

---

## 💻 Implementação (C Language)

O sistema utiliza as seguintes bibliotecas padrões:

```c
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
```
