#include <TaoApiCpp/request/WidgetItempanelGetRequest.h>

QString WidgetItempanelGetRequest::getApiMethodName() const {
  return "taobao.widget.itempanel.get";
}

QString WidgetItempanelGetRequest::getFields() const {
  return fields;
}
void WidgetItempanelGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong WidgetItempanelGetRequest::getItemId() const {
  return itemId;
}
void WidgetItempanelGetRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}



WidgetItempanelGetResponse *WidgetItempanelGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WidgetItempanelGetResponse *tmpResponse = new WidgetItempanelGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
