#ifndef FENXIAOPRODUCTPDUUPDATEREQUEST_H
#define FENXIAOPRODUCTPDUUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductPduUpdateResponse.h>

/**
 * TOP API: 产品分销商配额库存新增、修改、删除
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductPduUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDistributorId() const
;  void setDistributorId (qlonglong distributorId);

 bool getIsDelete() const
;  void setIsDelete (bool isDelete);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QString getQuantityType() const
;  void setQuantityType (QString quantityType);

 QString getQuantitys() const
;  void setQuantitys (QString quantitys);

 QString getSkuProperties() const
;  void setSkuProperties (QString skuProperties);


  virtual FenxiaoProductPduUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 分销商ID
 **/
  qlonglong distributorId;

/**
 * @brief 是否删除，删除指定分销商的数据
 **/
  bool isDelete;

/**
 * @brief 产品ID
 **/
  qlonglong productId;

/**
 * @brief 库存是追加还是覆盖；删除操作可不传 
append - 追加、overwrite - 覆盖
 **/
  QString quantityType;

/**
 * @brief 0-999999的整数，可传入多个，以逗号隔开，顺序与属性列表保持一致；删除操作可不传
 **/
  QString quantitys;

/**
 * @brief 产品包含sku时必选，可传入多个，以逗号隔开；删除操作可不传
 **/
  QString skuProperties;

};

#endif  /* FENXIAOPRODUCTPDUUPDATEREQUEST_H */
