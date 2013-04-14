#include <TaoApiCpp/response/AftersaleGetResponse.h>

QList<AfterSale> AftersaleGetResponse::getAfterSales() const {
  return afterSales;
}
void AftersaleGetResponse::setAfterSales (QList<AfterSale> afterSales) {
  this->afterSales = afterSales;
}

void AftersaleGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("after_sales")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("after_sales");
  Parser *parser;
  foreach (parser, listParser) {
    AfterSale tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    afterSales.append(tmp);
  }
  }

}

