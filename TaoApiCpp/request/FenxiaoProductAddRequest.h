#ifndef FENXIAOPRODUCTADDREQUEST_H
#define FENXIAOPRODUCTADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductAddResponse.h>

/**
 * TOP API: 添加分销平台产品数据。业务逻辑与分销系统前台页面一致。 
 
    * 产品图片默认为空 
    * 产品发布后默认为下架状态
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductAddRequest : public TaoRequest
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

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 QString getName() const
;  void setName (QString name);

 QString getOuterId() const
;  void setOuterId (QString outerId);

 QString getPicPath() const
;  void setPicPath (QString picPath);

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

 qlonglong getProductcatId() const
;  void setProductcatId (qlonglong productcatId);

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

 QString getSkuOuterIds() const
;  void setSkuOuterIds (QString skuOuterIds);

 QString getSkuProperties() const
;  void setSkuProperties (QString skuProperties);

 QString getSkuQuantitys() const
;  void setSkuQuantitys (QString skuQuantitys);

 QString getSkuStandardPrices() const
;  void setSkuStandardPrices (QString skuStandardPrices);

 QString getStandardPrice() const
;  void setStandardPrice (QString standardPrice);

 QString getTradeType() const
;  void setTradeType (QString tradeType);


  virtual FenxiaoProductAddResponse *getResponseClass(const QString &session = "",
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
 * @brief 产品主图，大小不超过500k，格式为gif,jpg,jpeg,png,bmp等图片
 **/
  FileItem image;

/**
 * @brief 自定义属性。格式为pid:value;pid:value
 **/
  QString inputProperties;

/**
 * @brief 添加产品时，添加入参isAuthz:yes|no  
yes:需要授权  
no:不需要授权  
默认是需要授权
 **/
  QString isAuthz;

/**
 * @brief 导入的商品ID
 **/
  qlonglong itemId;

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
 * @brief ems费用，单位：元。例：“10.56”。 大小为0.00元到999999元之间。
 **/
  QString postageEms;

/**
 * @brief 快递费用，单位：元。例：“10.56”。 大小为0.01元到999999元之间。
 **/
  QString postageFast;

/**
 * @brief 运费模板ID，参考taobao.postages.get。
 **/
  qlonglong postageId;

/**
 * @brief 平邮费用，单位：元。例：“10.56”。 大小为0.01元到999999元之间。
 **/
  QString postageOrdinary;

/**
 * @brief 运费类型，可选值：seller（供应商承担运费）、buyer（分销商承担运费）,默认seller。
 **/
  QString postageType;

/**
 * @brief 产品线ID
 **/
  qlonglong productcatId;

/**
 * @brief 产品属性，格式为pid:vid;pid:vid
 **/
  QString properties;

/**
 * @brief 属性别名，格式为：pid:vid:alias;pid:vid:alias（alias为别名）
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
 * @brief sku的采购价。如果多个，用逗号分隔，并与其他sku信息保持相同顺序
 **/
  QString skuCostPrices;

/**
 * @brief sku的经销采购价。如果多个，用逗号分隔，并与其他sku信息保持相同顺序。其中每个值的单位：元。例：“10.56,12.3”。必须在0.01元到10000000元之间。
 **/
  QString skuDealerCostPrices;

/**
 * @brief sku的商家编码。如果多个，用逗号分隔，并与其他sku信息保持相同顺序
 **/
  QString skuOuterIds;

/**
 * @brief sku的属性。如果多个，用逗号分隔，并与其他sku信息保持相同顺序
 **/
  QString skuProperties;

/**
 * @brief sku的库存。如果多个，用逗号分隔，并与其他sku信息保持相同顺序
 **/
  QString skuQuantitys;

/**
 * @brief sku的采购基准价。如果多个，用逗号分隔，并与其他sku信息保持相同顺序
 **/
  QString skuStandardPrices;

/**
 * @brief 标准价格，单位：元。例：“10.56”。必须在0.01元到10000000元之间。
 **/
  QString standardPrice;

/**
 * @brief 分销方式：AGENT（只做代销，默认值）、DEALER（只做经销）、ALL（代销和经销都做）
 **/
  QString tradeType;

};

#endif  /* FENXIAOPRODUCTADDREQUEST_H */
