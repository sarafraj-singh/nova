.. -*- rst -*-
.. needs:method_verification
.. needs:parameter_verification
.. needs:example_verification
.. needs:body_verification

=====================================
 Extensions (extensions) (DEPRECATED)
=====================================

Lists available extensions and shows information for an extension, by
alias.

OpenStack Compute API v2.0 supports extensions. However, extensions are
deprecated in Compute API v2.1. For information about extensions, see
`Extensions <http://developer.openstack.org/api-guide/compute/extensions.html>`__.

Show Extension Details
======================

.. rest_method:: GET /v2.1/{tenant_id}/extensions/{alias}

Shows details for an extension, by alias.

Normal response codes: 200,203

Error response codes: computeFault(400, 500), serviceUnavailable(503), badRequest(400),
unauthorized(401), forbidden(403), badMethod(405), itemNotFound(404)

Request
-------

.. rest_parameters:: parameters.yaml

  - tenant_id: tenant_id
  - alias: alias

Response
--------

.. rest_parameters:: parameters.yaml

  - extension: extension
  - name: name
  - alias: alias
  - links: links
  - namespace: namespace
  - description: description
  - updated: updated

**Example Show Extension Details: JSON response**

.. literalinclude:: ../../doc/api_samples/extension-info/extensions-get-resp.json
   :language: javascript
