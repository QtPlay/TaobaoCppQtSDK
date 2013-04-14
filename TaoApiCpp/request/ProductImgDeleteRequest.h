#ifndef PRODUCTIMGDELETEREQUEST_H
#define PRODUCTIMGDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ProductImgDeleteResponse.h>

/**
 * TOP API: 1.传入非主图ID  
2.传入产品ID  
删除产品非主图
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductImgDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getId() const
;  void setId (qlonglong id);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);


  virtual ProductImgDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 非主图ID
 **/
  qlonglong id;

/**
 * @brief 产品ID.Product的id,通过taobao.product.add接口新增产品的时候会返回id.
 **/
  qlonglong productId;

};

#endif  /* PRODUCTIMGDELETEREQUEST_H */
