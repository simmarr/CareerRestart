# Lesson 2 - TCP & Three-Way Handshake

## What is TCP?

TCP (Transmission Control Protocol) is a connection-oriented protocol that provides reliable communication between two computers.

---

## Why do we need TCP?

- Reliable delivery
- Ordered delivery
- Retransmission of lost packets
- Connection establishment before sending data

---

## Three-Way Handshake

1. SYN
Client asks to establish a connection.

2. SYN + ACK
Server acknowledges the request and agrees to establish the connection.

3. ACK
Client acknowledges the server's response.

Connection is now established.

---

## Why 3 messages?

The third ACK confirms that the client received the server's response.

---

## Difference between TCP and HTTPS

TCP:
- Reliable communication
- No encryption

HTTPS:
- Encrypts communication
- Uses TLS over TCP

---

## Interview Questions

Q. Why do we need TCP?

Q. Why is TCP connection-oriented?

Q. Explain the Three-Way Handshake.

Q. Why is the third ACK required?

---

## Keywords

- TCP
- SYN
- ACK
- Three-Way Handshake
- Reliable Communication