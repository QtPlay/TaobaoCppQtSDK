#ifndef FENXIAOPRODUCTIMAGEDELETEREQUEST_H
#define FENXIAOPRODUCTIMAGEDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductImageDeleteResponse.h>

/**
 * TOP API: 产品图片删除，只删除图片信息，不真正删除图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductImageDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getPosition() const
;  void setPosition (qlonglong position);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QString getProperties() const
;  void setProperties (QString properties);


  virtual FenxiaoProductImageDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 图片位置
 **/
  qlonglong position;

/**
 * @brief 产品ID
 **/
  qlonglong productId;

/**
 * @brief properties表示sku图片的属性。key:value形式，key是pid，value是vid。如果position是0的话，则properties需要是必传项
 **/
  QString properties;

};

#endif  /* FENXIAOPRODUCTIMAGEDELETEREQUEST_H */
