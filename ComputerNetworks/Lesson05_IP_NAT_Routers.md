# Public IP, Private IP, Routers and NAT

## Private IP Address

A private IP address identifies a device inside a private/local network.

For example, devices in a home network might have addresses such as:

- 192.168.1.2
- 192.168.1.3
- 192.168.1.4

Private IP addresses are not directly routable over the public Internet.
Different private networks can reuse the same private IP addresses.

## Public IP Address

A public IP address is globally routable on the Internet.

In a typical home network, multiple devices have their own private IP
addresses while the router/network communicates with the Internet using
a public IP address.

## Why Do We Need NAT?

NAT stands for Network Address Translation.

NAT allows devices using private IP addresses to communicate with devices
on the public Internet.

This also allows multiple devices in a private network to share a public
IPv4 address for Internet communication.

## How NAT Works

Suppose a laptop has:

Private IP: 192.168.1.5

When the laptop communicates with a server on the Internet, the router
translates information associated with the private-side connection to
its public-side connection.

The router maintains a translation table.

When matching response traffic comes back, the router uses this mapping
to forward the traffic to the correct device inside the private network.

## Role of Ports in NAT

Ports help distinguish different connections.

For example:

192.168.1.2:51000 -> PublicIP:40001
192.168.1.3:52000 -> PublicIP:40002

When response traffic arrives for PublicIP:40001, the router can use its
translation mapping to determine which internal IP address and port the
traffic belongs to.

This use of port translation is commonly called PAT
(Port Address Translation), or NAT overload.

## Example

Phone  -> Private IP \
Laptop -> Private IP  -> Router/NAT -> Public IP -> Internet
TV     -> Private IP /

The devices can have different private IP addresses while sharing the
router's public IPv4 address for Internet access.

## Interview Takeaway

Private IP:
Used inside a private/local network and is not publicly routable.

Public IP:
Globally routable on the Internet.

NAT:
Translates between private-side and public-side addressing.

PAT:
Also uses port numbers so multiple connections/devices can share a
public IP address.

Simple mental model:

Private device -> Router/NAT -> Public Internet