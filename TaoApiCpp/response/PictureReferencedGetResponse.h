#ifndef PICTUREREFERENCEDGETRESPONSE_H
#define PICTUREREFERENCEDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ReferenceDetail.h>


/**
 * @brief TOP RESPONSE API: 查询图片被引用的详情，包括引用者，引用者名字，引用者地址
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureReferencedGetResponse : public TaoResponse
{
public:
 virtual ~PictureReferencedGetResponse() { }

  QList<ReferenceDetail> getReferences() const;
  void setReferences (QList<ReferenceDetail> references);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 引用详情列表
 **/
  QList<ReferenceDetail> references;

};

#endif
