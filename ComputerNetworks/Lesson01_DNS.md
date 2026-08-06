# Lesson 1 - DNS (Domain Name System)

## Why do we need DNS?

Humans remember domain names.

Example:
google.com

Computers communicate using IP addresses.

Example:
142.250.xxx.xxx

DNS translates a domain name into an IP address.

---

## Why not use domain names directly?

Routers on the Internet route packets using IP addresses, not domain names.

Think of it like:

Name → Phone Contact
IP Address → Phone Number

---

## What happens when I type google.com?

1. Browser asks Operating System.
2. Operating System asks DNS Resolver.
3. Resolver checks DNS Cache.
4. If cache miss:
   - Root DNS Server
   - .com DNS Server
   - Google's Authoritative DNS Server
5. Resolver receives IP.
6. Stores IP in cache.
7. Returns IP to browser.

---

## DNS Cache

Stores recently resolved IP addresses.

Purpose:
- Faster lookups.
- Reduces DNS traffic.

Example:

google.com
↓

142.250.xxx.xxx

---

## TTL (Time To Live)

Every DNS record has an expiry time.

After TTL expires:
- Cache entry is deleted.
- Resolver performs DNS lookup again.

Purpose:
- Allows IP changes to propagate.

---

## Interview Questions

Q. What is DNS?

DNS translates human-readable domain names into IP addresses.

---

Q. Why do we need DNS?

Humans remember names.
Routers use IP addresses.

---

Q. Why is DNS fast?

Because DNS caching avoids repeated lookups.

---

## Keywords

- DNS
- DNS Resolver
- Cache
- TTL
- Authoritative DNS Server