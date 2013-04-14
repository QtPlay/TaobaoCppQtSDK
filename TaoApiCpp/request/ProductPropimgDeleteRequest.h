#ifndef PRODUCTPROPIMGDELETEREQUEST_H
#define PRODUCTPROPIMGDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ProductPropimgDeleteResponse.h>

/**
 * TOP API: 1.传入属性图片ID  
2.传入产品ID  
删除一个产品的属性图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductPropimgDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getId() const
;  void setId (qlonglong id);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);


  virtual ProductPropimgDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 属性图片ID
 **/
  qlonglong id;

/**
 * @brief 产品ID.Product的id.
 **/
  qlonglong productId;

};

#endif  /* PRODUCTPROPIMGDELETEREQUEST_H */
