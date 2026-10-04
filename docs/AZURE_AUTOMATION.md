# Azure automation and Copilot

Azure Copilot is the assistant in the Azure portal. Microsoft currently lists its capabilities as included at no extra charge, except for the usage-priced Observability Agent. It is useful for inspecting and managing Azure resources; it is distinct from the model API used by this project's automated workers.

The existing tools/hybrid_router.py adapter sends bounded model requests to an Azure OpenAI endpoint, authenticates through the Azure CLI using Entra ID, and records attempts in a local journal. tools/hybrid_campaign.py and tools/hybrid_supervisor.py coordinate tasks. Workers return proposals; the master validates results and never executes model output directly.

To charge eligible model inference to an Azure credit subscription:

1. Confirm that the deployed model's resource belongs to the subscription holding the credit and that the service is eligible for that offer.
2. Configure AZURE_OPENAI_ENDPOINT and AZURE_OPENAI_DEPLOYMENT locally. Authenticate through the Azure CLI. Do not commit keys or tokens.
3. Preserve the existing provider journal, spending ceilings, request reservations and explicit human grants. The public repository contains no replacement budget ledger.
4. Track model/token usage separately from actual Azure billed charges. Dollar balance and tokens-per-minute quota are different limits; adding workers does not increase quota.
5. Use Azure cost monitoring and the project's bounded request policy together. Cost alerts alone are not a guaranteed real-time spending cap.

The Adviser model provider and this project's advisor router are separate sources of usage. The router's token totals do not include all work performed by the main coding agent or other tools.

References:

- https://learn.microsoft.com/en-us/azure/copilot/overview
- https://learn.microsoft.com/en-us/azure/foundry/how-to/develop/sdk-overview

No new Copilot subscription, hosted agent or Azure deployment was created as part of publishing this workspace.
