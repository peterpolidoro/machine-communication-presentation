---
layout: presentation
---

```json
--> {"jsonrpc": "2.0", "method": "subtract", "params": [42, 23], "id": 3}
<-- {"jsonrpc": "2.0", "result": 19, "id": 3}
```

```json
--> ["subtract",42,23]
<-- {"id": "subtract", "result": 19}
```

```json
--> subtract 42 23
<-- {"id": "subtract", "result": 19}
```

[![](assets/img/transparent.png)](json-rpc)
