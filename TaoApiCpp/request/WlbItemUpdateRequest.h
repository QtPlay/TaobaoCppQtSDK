#ifndef WLBITEMUPDATEREQUEST_H
#define WLBITEMUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemUpdateResponse.h>

/**
 * TOP API: 修改物流宝商品信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getColor() const
;  void setColor (QString color);

 QString getDeletePropertyKeyList() const
;  void setDeletePropertyKeyList (QString deletePropertyKeyList);

 QString getGoodsCat() const
;  void setGoodsCat (QString goodsCat);

 qlonglong getHeight() const
;  void setHeight (qlonglong height);

 qlonglong getId() const
;  void setId (qlonglong id);

 bool getIsDangerous() const
;  void setIsDangerous (bool isDangerous);

 bool getIsFriable() const
;  void setIsFriable (bool isFriable);

 qlonglong getLength() const
;  void setLength (qlonglong length);

 QString getName() const
;  void setName (QString name);

 QString getPackageMaterial() const
;  void setPackageMaterial (QString packageMaterial);

 QString getPricingCat() const
;  void setPricingCat (QString pricingCat);

 QString getRemark() const
;  void setRemark (QString remark);

 QString getTitle() const
;  void setTitle (QString title);

 QString getUpdatePropertyKeyList() const
;  void setUpdatePropertyKeyList (QString updatePropertyKeyList);

 QString getUpdatePropertyValueList() const
;  void setUpdatePropertyValueList (QString updatePropertyValueList);

 qlonglong getVolume() const
;  void setVolume (qlonglong volume);

 qlonglong getWeight() const
;  void setWeight (qlonglong weight);

 qlonglong getWidth() const
;  void setWidth (qlonglong width);


  virtual WlbItemUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品颜色
 **/
  QString color;

/**
 * @brief 需要删除的商品属性key列表
 **/
  QString deletePropertyKeyList;

/**
 * @brief 商品货类
 **/
  QString goodsCat;

/**
 * @brief 商品高度，单位厘米
 **/
  qlonglong height;

/**
 * @brief 要修改的商品id
 **/
  qlonglong id;

/**
 * @brief 是否危险品
 **/
  bool isDangerous;

/**
 * @brief 是否易碎品
 **/
  bool isFriable;

/**
 * @brief 商品长度，单位厘米
 **/
  qlonglong length;

/**
 * @brief 要修改的商品名称
 **/
  QString name;

/**
 * @brief 商品包装材料类型
 **/
  QString packageMaterial;

/**
 * @brief 商品计价货类
 **/
  QString pricingCat;

/**
 * @brief 要修改的商品备注
 **/
  QString remark;

/**
 * @brief 要修改的商品标题
 **/
  QString title;

/**
 * @brief 需要修改的商品属性值的列表，如果属性不存在，则新增属性
 **/
  QString updatePropertyKeyList;

/**
 * @brief 需要修改的属性值的列表
 **/
  QString updatePropertyValueList;

/**
 * @brief 商品体积，单位立方厘米
 **/
  qlonglong volume;

/**
 * @brief 商品重量，单位G
 **/
  qlonglong weight;

/**
 * @brief 商品宽度，单位厘米
 **/
  qlonglong width;

};

#endif  /* WLBITEMUPDATEREQUEST_H */
