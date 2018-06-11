---
layout: presentation
---

# [](#header-1) JSON-RPC 2.0

```json
--> {"jsonrpc": "2.0", "method": "add", "params": [42, 23], "id": 3}
<-- {"jsonrpc": "2.0", "result": 65, "id": 3}
```

# [](#header-1) Compact JSON-RPC 2.0

```json
--> ["add",42,23]
<-- {"id": "add", "result": 65}
```

# [](#header-1) Super Compact JSON-RPC 2.0

```
--> add 42 23
<-- {"id": "add", "result": 65}
```

[![](assets/img/white.png)](sound-transmitter)
