-- Country Table
CREATE TABLE IF NOT EXISTS country (
    NAME VARCHAR(255) NOT NULL
    Constraint pk_country PRIMARY KEY (NAME)
);

-- div Table
CREATE TABLE IF NOT EXISTS div (
    NAME VARCHAR(255) NOT NULL,
    country VARCHAR(255) NOT NULL,
    CONSTRAINT pk_division PRIMARY KEY (id),
    CONSTRAINT fk_division_country FOREIGN KEY (country) REFERENCES country (NAME)
);

-- dist Table
CREATE TABLE IF NOT EXISTS dist (
    NAME VARCHAR(255) NOT NULL,
    div VARCHAR(255) NOT NULL,
    CONSTRAINT pk_district PRIMARY KEY (id),
    CONSTRAINT fk_district_division FOREIGN KEY (div) REFERENCES div (NAME)
);

-- Branch Table
CREATE TABLE IF NOT EXISTS branch (
    NAME VARCHAR(255) NOT NULL,
    dist VARCHAR(255) NOT NULL,
    CONSTRAINT pk_branch PRIMARY KEY (id),
    CONSTRAINT fk_branch_district FOREIGN KEY (dist) REFERENCES dist (NAME)
);

-- Department Table
CREATE TABLE IF NOT EXISTS department (
    NAME VARCHAR(255) NOT NULL,
    CONSTRAINT pk_department PRIMARY KEY (NAME),
);

-- Department Branch Table
CREATE TABLE IF NOT EXISTS department_branch (
    uniqueID NUMBER(10) NOT NULL,
    department VARCHAR(255) NOT NULL,
    branch VARCHAR(255) NOT NULL,
    CONSTRAINT pk_department_branch PRIMARY KEY (uniqueID),
    CONSTRAINT fk_department_branch_department FOREIGN KEY (department) REFERENCES department (NAME),
    CONSTRAINT fk_department_branch_branch FOREIGN KEY (branch) REFERENCES branch (NAME)
);

-- Employee Table will reference department_branch
CREATE TABLE IF NOT EXISTS employee (
    id NUMBER(10) NOT NULL,
    NAME VARCHAR(255) NOT NULL,
    department_branch NUMBER(10) NOT NULL,
    CONSTRAINT pk_employee PRIMARY KEY (id),
    CONSTRAINT fk_employee_department_branch FOREIGN KEY (department_branch) REFERENCES department_branch (uniqueID)
);


-- Item Table
CREATE TABLE IF NOT EXISTS item (
    NAME VARCHAR(255) NOT NULL,
    branch VARCHAR(255) NOT NULL,
    CONSTRAINT pk_item PRIMARY KEY (NAME),
    CONSTRAINT fk_item_branch FOREIGN KEY (branch) REFERENCES branch (NAME)
);

-- Customer Table
CREATE TABLE IF NOT EXISTS customer (
    id NUMBER(10) NOT NULL,
    NAME VARCHAR(255) NOT NULL,
    Contact VARCHAR(255) NOT NULL,
    dist VARCHAR(255) NOT NULL,
    div VARCHAR(255) NOT NULL,
    country VARCHAR(255) NOT NULL,
    CONSTRAINT pk_customer PRIMARY KEY (id)
    CONSTRAINT fk_customer_district FOREIGN KEY (dist) REFERENCES dist (NAME),
    CONSTRAINT fk_customer_division FOREIGN KEY (div) REFERENCES div (NAME),
    CONSTRAINT fk_customer_country FOREIGN KEY (country) REFERENCES country (NAME)
);

-- Buys Table
CREATE TABLE IF NOT EXISTS buys (
    uniqueID NUMBER(10) NOT NULL,
    customer NUMBER(10) NOT NULL,
    branch VARCHAR(255) NOT NULL,
    item VARCHAR(255) NOT NULL,
    CONSTRAINT pk_buys PRIMARY KEY (uniqueID),
    CONSTRAINT fk_buys_customer FOREIGN KEY (customer) REFERENCES customer (id),
    CONSTRAINT fk_buys_branch FOREIGN KEY (branch) REFERENCES branch (NAME),
    CONSTRAINT fk_buys_item FOREIGN KEY (item) REFERENCES item (NAME)
);

-- Rent table 
CREATE TABLE IF NOT EXISTS rent (
    uniqueID NUMBER(10) NOT NULL,
    duration NUMBER(10) NOT NULL,
    employee NUMBER(10) NOT NULL,
    branch VARCHAR(255) NOT NULL,
    item VARCHAR(255) NOT NULL,
    CONSTRAINT pk_rent PRIMARY KEY (uniqueID),
    CONSTRAINT fk_rent_employee FOREIGN KEY (employee) REFERENCES employee (id),
    CONSTRAINT fk_rent_branch FOREIGN KEY (branch) REFERENCES branch (NAME),
    Constraint fk_rent_item FOREIGN KEY (item) REFERENCES item (NAME)
);



