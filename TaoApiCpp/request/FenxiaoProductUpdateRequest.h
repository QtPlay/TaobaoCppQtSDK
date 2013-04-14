#ifndef FENXIAOPRODUCTUPDATEREQUEST_H
#define FENXIAOPRODUCTUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductUpdateResponse.h>

/**
 * TOP API: 更新分销平台产品数据，不传更新数据返回失败<br> 
1. 对sku进行增、删操作时，原有的sku_ids字段会被忽略，请使用sku_properties和sku_properties_del。<br>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAlarmNumber() const
;  void setAlarmNumber (qlonglong alarmNumber);

 qlonglong getCategoryId() const
;  void setCategoryId (qlonglong categoryId);

 QString getCity() const
;  void setCity (QString city);

 QString getCostPrice() const
;  void setCostPrice (QString costPrice);

 QString getDealerCostPrice() const
;  void setDealerCostPrice (QString dealerCostPrice);

 QString getDesc() const
;  void setDesc (QString desc);

 qlonglong getDiscountId() const
;  void setDiscountId (qlonglong discountId);

 QString getHaveGuarantee() const
;  void setHaveGuarantee (QString haveGuarantee);

 QString getHaveInvoice() const
;  void setHaveInvoice (QString haveInvoice);

 FileItem getImage() const
;  void setImage (FileItem image);

 QString getInputProperties() const
;  void setInputProperties (QString inputProperties);

 QString getIsAuthz() const
;  void setIsAuthz (QString isAuthz);

 QString getName() const
;  void setName (QString name);

 QString getOuterId() const
;  void setOuterId (QString outerId);

 QString getPicPath() const
;  void setPicPath (QString picPath);

 qlonglong getPid() const
;  void setPid (qlonglong pid);

 QString getPostageEms() const
;  void setPostageEms (QString postageEms);

 QString getPostageFast() const
;  void setPostageFast (QString postageFast);

 qlonglong getPostageId() const
;  void setPostageId (qlonglong postageId);

 QString getPostageOrdinary() const
;  void setPostageOrdinary (QString postageOrdinary);

 QString getPostageType() const
;  void setPostageType (QString postageType);

 QString getProperties() const
;  void setProperties (QString properties);

 QString getPropertyAlias() const
;  void setPropertyAlias (QString propertyAlias);

 QString getProv() const
;  void setProv (QString prov);

 qlonglong getQuantity() const
;  void setQuantity (qlonglong quantity);

 QString getRetailPriceHigh() const
;  void setRetailPriceHigh (QString retailPriceHigh);

 QString getRetailPriceLow() const
;  void setRetailPriceLow (QString retailPriceLow);

 QString getSkuCostPrices() const
;  void setSkuCostPrices (QString skuCostPrices);

 QString getSkuDealerCostPrices() const
;  void setSkuDealerCostPrices (QString skuDealerCostPrices);

 QString getSkuIds() const
;  void setSkuIds (QString skuIds);

 QString getSkuOuterIds() const
;  void setSkuOuterIds (QString skuOuterIds);

 QString getSkuProperties() const
;  void setSkuProperties (QString skuProperties);

 QString getSkuPropertiesDel() const
;  void setSkuPropertiesDel (QString skuPropertiesDel);

 QString getSkuQuantitys() const
;  void setSkuQuantitys (QString skuQuantitys);

 QString getSkuStandardPrices() const
;  void setSkuStandardPrices (QString skuStandardPrices);

 QString getStandardPrice() const
;  void setStandardPrice (QString standardPrice);

 QString getStatus() const
;  void setStatus (QString status);


  virtual FenxiaoProductUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 警戒库存必须是0到29999。
 **/
  qlonglong alarmNumber;

/**
 * @brief 所属类目id，参考Taobao.itemcats.get，不支持成人等类目，输入成人类目id保存提示类目属性错误。
 **/
  qlonglong categoryId;

/**
 * @brief 所在地：市，例：“杭州”
 **/
  QString city;

/**
 * @brief 代销采购价格，单位：元。例：“10.56”。必须在0.01元到10000000元之间。
 **/
  QString costPrice;

/**
 * @brief 经销采购价，单位：元。例：“10.56”。必须在0.01元到10000000元之间。
 **/
  QString dealerCostPrice;

/**
 * @brief 产品描述，长度为5到25000字符。
 **/
  QString desc;

/**
 * @brief 折扣ID
 **/
  qlonglong discountId;

/**
 * @brief 是否有保修，可选值：false（否）、true（是），默认false。
 **/
  QString haveGuarantee;

/**
 * @brief 是否有发票，可选值：false（否）、true（是），默认false。
 **/
  QString haveInvoice;

/**
 * @brief 主图图片，如果pic_path参数不空，则优先使用pic_path，忽略该参数
 **/
  FileItem image;

/**
 * @brief 自定义属性。格式为pid:value;pid:value
 **/
  QString inputProperties;

/**
 * @brief 产品是否需要授权isAuthz:yes|no  
yes:需要授权  
no:不需要授权
 **/
  QString isAuthz;

/**
 * @brief 产品名称，长度不超过60个字节。
 **/
  QString name;

/**
 * @brief 商家编码，长度不能超过60个字节。
 **/
  QString outerId;

/**
 * @brief 产品主图图片空间相对路径或绝对路径
 **/
  QString picPath;

/**
 * @brief 产品ID
 **/
  qlonglong pid;

/**
 * @brief ems费用，单位：元。例：“10.56”。大小为0.01元到999999元之间。更新时必须指定运费类型为buyer，否则不更新。
 **/
  QString postageEms;

/**
 * @brief 快递费用，单位：元。例：“10.56”。大小为0.01元到999999元之间。更新时必须指定运费类型为buyer，否则不更新。
 **/
  QString postageFast;

/**
 * @brief 运费模板ID，参考taobao.postages.get。更新时必须指定运费类型为 buyer，否则不更新。
 **/
  qlonglong postageId;

/**
 * @brief 平邮费用，单位：元。例：“10.56”。大小为0.01元到999999元之间。更新时必须指定运费类型为buyer，否则不更新。
 **/
  QString postageOrdinary;

/**
 * @brief 运费类型，可选值：seller（供应商承担运费）、buyer（分销商承担运费）。
 **/
  QString postageType;

/**
 * @brief 产品属性
 **/
  QString properties;

/**
 * @brief 属性别名
 **/
  QString propertyAlias;

/**
 * @brief 所在地：省，例：“浙江”
 **/
  QString prov;

/**
 * @brief 产品库存必须是1到999999。
 **/
  qlonglong quantity;

/**
 * @brief 最高零售价，单位：元。例：“10.56”。必须在0.01元到10000000元之间，最高零售价必须大于最低零售价。
 **/
  QString retailPriceHigh;

/**
 * @brief 最低零售价，单位：元。例：“10.56”。必须在0.01元到10000000元之间。
 **/
  QString retailPriceLow;

/**
 * @brief sku采购价格，单位元，例："10.50,11.00,20.50"，字段必须和上面的sku_ids或sku_properties保持一致。
 **/
  QString skuCostPrices;

/**
 * @brief sku的经销采购价。如果多个，用逗号分隔，并与其他sku信息保持相同顺序。其中每个值的单位：元。例：“10.56,12.3”。必须在0.01元到10000000元之间。
 **/
  QString skuDealerCostPrices;

/**
 * @brief sku id列表，例：1001,1002,1003。如果传入sku_properties将忽略此参数。
 **/
  QString skuIds;

/**
 * @brief sku商家编码 ，单位元，例："S1000,S1002,S1003"，字段必须和上面的id或sku_properties保持一致，如果没有可以写成",,"
 **/
  QString skuOuterIds;

/**
 * @brief sku属性。格式:pid:vid;pid:vid,表示一组属性如:1627207:3232483;1630696:3284570,表示一组:机身颜色:军绿色;手机套餐:一电一充。多组之间用逗号“,”区分。(属性的pid调用taobao.itemprops.get取得，属性值的vid用taobao.itempropvalues.get取得vid) 
通过此字段可新增和更新sku。若传入此值将忽略sku_ids字段。sku其他字段与此值保持一致。
 **/
  QString skuProperties;

/**
 * @brief 根据sku属性删除sku信息。需要按组删除属性。
 **/
  QString skuPropertiesDel;

/**
 * @brief sku库存，单位元，例："10,20,30"，字段必须和sku_ids或sku_properties保持一致。
 **/
  QString skuQuantitys;

/**
 * @brief sku采购基准价，单位元，例："10.50,11.00,20.50"，字段必须和上面的sku_ids或sku_properties保持一致。
 **/
  QString skuStandardPrices;

/**
 * @brief 采购基准价，单位：元。例：“10.56”。必须在0.01元到10000000元之间。
 **/
  QString standardPrice;

/**
 * @brief 发布状态，可选值：up（上架）、down（下架）、delete（删除），输入非法字符则忽略。
 **/
  QString status;

};

#endif  /* FENXIAOPRODUCTUPDATEREQUEST_H */
