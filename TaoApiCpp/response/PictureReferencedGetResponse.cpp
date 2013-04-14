#include <TaoApiCpp/response/PictureReferencedGetResponse.h>

QList<ReferenceDetail> PictureReferencedGetResponse::getReferences() const {
  return references;
}
void PictureReferencedGetResponse::setReferences (QList<ReferenceDetail> references) {
  this->references = references;
}

void PictureReferencedGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("references")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("references");
  Parser *parser;
  foreach (parser, listParser) {
    ReferenceDetail tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    references.append(tmp);
  }
  }

}

