# Computer Networks - HTTP, HTTPS, TLS & Ports

## 1. HTTP

HTTP stands for **Hypertext Transfer Protocol**.

It defines how clients and servers exchange requests and responses.

Example:

Client request:

GET /index.html

Server response:

200 OK
+ requested content

HTTP itself does not provide encryption.

---

## 2. HTTPS

HTTPS is **HTTP protected using TLS**.

It allows HTTP data to travel over an encrypted and authenticated connection.

Common default ports:

- HTTP -> Port 80
- HTTPS -> Port 443

Important:

HTTPS is a protocol, not a port number.
443 is the default port commonly used by HTTPS.

---

## 3. TCP vs TLS

### TCP

TCP provides reliable communication.

Responsibilities include:

- Connection establishment
- Ordered delivery
- Retransmission of lost data
- Reliable transport

TCP itself does NOT encrypt application data.

### TLS

TLS protects the communication.

It provides:

- Confidentiality
- Integrity
- Authentication

Confidentiality:
An attacker should not be able to simply read the transmitted data.

Integrity:
Tampering with protected data should be detectable.

Authentication:
The browser can verify the identity of the server.

---

## 4. Digital Certificates

During the TLS handshake, the server presents a digital certificate.

The browser validates the certificate to help verify that it is communicating
with the intended server.

The server does not create a new certificate for every connection.

TLS also establishes cryptographic keys used to protect the communication.

---

## 5. Ports

An IP address identifies a machine.

A port identifies a service/process on that machine.

Example:

IP Address -> Which machine?

Port -> Which service?

Common ports:

- HTTP -> 80
- HTTPS -> 443
- SSH -> 22

A single machine can provide multiple network services, which is why the IP
address alone is not enough.

---

## 6. What Happens When I Enter an HTTPS URL?

Example:

https://google.com

### Step 1 - DNS

The browser needs the IP address corresponding to the domain.

It may first use cached DNS information.

If necessary, a DNS resolver performs the lookup.

Domain Name -> IP Address

### Step 2 - Port

Because HTTPS is being used, the browser normally connects to port 443.

IP Address -> Machine

Port 443 -> HTTPS service

### Step 3 - TCP Three-Way Handshake

TCP establishes the connection:

Client -> SYN

Server -> SYN + ACK

Client -> ACK

The TCP connection is established.

### Step 4 - TLS Handshake

TLS authenticates the server and establishes cryptographic keys.

The server presents its certificate.

TLS provides:

- Confidentiality
- Integrity
- Authentication

### Step 5 - HTTP Request

After the secure connection is established, the browser can send an HTTP
request through it.

Example:

GET /

### Step 6 - HTTP Response

The server sends an HTTP response containing the requested resources.

---

## Interview Summary

DNS:
Where is the server?

IP Address:
Which machine?

Port:
Which service on that machine?

TCP:
How can the data be transported reliably?

TLS:
How can the communication be authenticated and protected?

HTTP:
What does the client want from the server?

---

## Complete Mental Model

Domain
  |
  v
DNS
  |
  v
IP Address
  |
  v
Port 443
  |
  v
TCP Three-Way Handshake
  |
  v
TLS Handshake
  |
  v
Encrypted HTTP Request
  |
  v
HTTP Response