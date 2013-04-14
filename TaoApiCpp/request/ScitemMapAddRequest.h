#ifndef SCITEMMAPADDREQUEST_H
#define SCITEMMAPADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ScitemMapAddResponse.h>

/**
 * TOP API: 创建IC商品或分销商品与后端商品的映射关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemMapAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 bool getNeedCheck() const
;  void setNeedCheck (bool needCheck);

 QString getOuterCode() const
;  void setOuterCode (QString outerCode);

 qlonglong getScItemId() const
;  void setScItemId (qlonglong scItemId);

 qlonglong getSkuId() const
;  void setSkuId (qlonglong skuId);


  virtual ScitemMapAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 前台ic商品id
 **/
  qlonglong itemId;

/**
 * @brief 默认值为false 
true:进行高级校验,前端商品或SKU的商家编码必须与后端商品的商家编码一致，否则会拒绝关联 
false:不进行高级校验
 **/
  bool needCheck;

/**
 * @brief sc_item_id和outer_code 其中一个不能为空
 **/
  QString outerCode;

/**
 * @brief sc_item_id和outer_code 其中一个不能为空
 **/
  qlonglong scItemId;

/**
 * @brief 前台ic商品skuid
 **/
  qlonglong skuId;

};

#endif  /* SCITEMMAPADDREQUEST_H */
