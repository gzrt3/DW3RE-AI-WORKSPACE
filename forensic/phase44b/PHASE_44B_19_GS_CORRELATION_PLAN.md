# GS correlation plan

Existing GSDump evidence provides downstream stream offsets, GIF tags, GS state, and geometry candidates. It does not provide a runtime source address or upstream command identity.

The correlation key must be a synchronized transfer ordinal/byte range, not vertex count alone. For one Part12 event, retain the exact path-3 payload range and map it to the existing dump's transfer record and GIF offset. Only then can a GS candidate receive `[DIRECT_CORRELATION]`.

Until that event exists, the relation is only `[UNKNOWN]`; repeated 2,680/2,730-vertex signatures are structural repeats, not Resource1670 proof.

