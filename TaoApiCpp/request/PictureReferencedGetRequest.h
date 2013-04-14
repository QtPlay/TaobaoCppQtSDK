#ifndef PICTUREREFERENCEDGETREQUEST_H
#define PICTUREREFERENCEDGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PictureReferencedGetResponse.h>

/**
 * TOP API: 查询图片被引用的详情，包括引用者，引用者名字，引用者地址
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureReferencedGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getPictureId() const
;  void setPictureId (qlonglong pictureId);


  virtual PictureReferencedGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 图片id
 **/
  qlonglong pictureId;

};

#endif  /* PICTUREREFERENCEDGETREQUEST_H */
