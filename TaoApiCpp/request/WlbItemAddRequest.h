#ifndef WLBITEMADDREQUEST_H
#define WLBITEMADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemAddResponse.h>

/**
 * TOP API: 添加物流宝商品，支持物流宝子商品和属性添加
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getColor() const
;  void setColor (QString color);

 QString getGoodsCat() const
;  void setGoodsCat (QString goodsCat);

 qlonglong getHeight() const
;  void setHeight (qlonglong height);

 bool getIsDangerous() const
;  void setIsDangerous (bool isDangerous);

 bool getIsFriable() const
;  void setIsFriable (bool isFriable);

 QString getIsSku() const
;  void setIsSku (QString isSku);

 QString getItemCode() const
;  void setItemCode (QString itemCode);

 qlonglong getLength() const
;  void setLength (qlonglong length);

 QString getName() const
;  void setName (QString name);

 QString getPackageMaterial() const
;  void setPackageMaterial (QString packageMaterial);

 qlonglong getPrice() const
;  void setPrice (qlonglong price);

 QString getPricingCat() const
;  void setPricingCat (QString pricingCat);

 QString getProNameList() const
;  void setProNameList (QString proNameList);

 QString getProValueList() const
;  void setProValueList (QString proValueList);

 QString getRemark() const
;  void setRemark (QString remark);

 bool getSupportBatch() const
;  void setSupportBatch (bool supportBatch);

 QString getTitle() const
;  void setTitle (QString title);

 QString getType() const
;  void setType (QString type);

 qlonglong getVolume() const
;  void setVolume (qlonglong volume);

 qlonglong getWeight() const
;  void setWeight (qlonglong weight);

 qlonglong getWidth() const
;  void setWidth (qlonglong width);


  virtual WlbItemAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品颜色
 **/
  QString color;

/**
 * @brief 货类
 **/
  QString goodsCat;

/**
 * @brief 商品高度，单位毫米
 **/
  qlonglong height;

/**
 * @brief 是否危险品
 **/
  bool isDangerous;

/**
 * @brief 是否易碎品
 **/
  bool isFriable;

/**
 * @brief 是否sku
 **/
  QString isSku;

/**
 * @brief 商品编码
 **/
  QString itemCode;

/**
 * @brief 商品长度，单位毫米
 **/
  qlonglong length;

/**
 * @brief 商品名称
 **/
  QString name;

/**
 * @brief 商品包装材料类型
 **/
  QString packageMaterial;

/**
 * @brief 商品价格，单位：分
 **/
  qlonglong price;

/**
 * @brief 计价货类
 **/
  QString pricingCat;

/**
 * @brief 属性名列表,目前支持的属性： 
毛重:GWeight	 
净重:Nweight 
皮重: Tweight 
自定义属性： 
paramkey1 
paramkey2 
paramkey3 
paramkey4
 **/
  QString proNameList;

/**
 * @brief 属性值列表： 
10,8
 **/
  QString proValueList;

/**
 * @brief 商品备注
 **/
  QString remark;

/**
 * @brief 是否支持批次
 **/
  bool supportBatch;

/**
 * @brief 商品标题
 **/
  QString title;

/**
 * @brief NORMAL--普通商品 
COMBINE--组合商品 
DISTRIBUTION--分销
 **/
  QString type;

/**
 * @brief 商品体积，单位立方厘米
 **/
  qlonglong volume;

/**
 * @brief 商品重量，单位G
 **/
  qlonglong weight;

/**
 * @brief 商品宽度，单位毫米
 **/
  qlonglong width;

};

#endif  /* WLBITEMADDREQUEST_H */
