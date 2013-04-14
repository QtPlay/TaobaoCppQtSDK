#ifndef FENXIAOPRODUCT_H
#define FENXIAOPRODUCT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/FenxiaoPdu.h>
#include <TaoApiCpp/domain/FenxiaoSku.h>


/**
 * @brief 分销产品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProduct : public TaoDomain
{

public:
 virtual ~FenxiaoProduct() { }

  qlonglong getAlarmNumber() const;
  void setAlarmNumber (qlonglong alarmNumber);
  QString getCategoryId() const;
  void setCategoryId (QString categoryId);
  QString getCity() const;
  void setCity (QString city);
  QString getCostPrice() const;
  void setCostPrice (QString costPrice);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QString getDealerCostPrice() const;
  void setDealerCostPrice (QString dealerCostPrice);
  QString getDescPath() const;
  void setDescPath (QString descPath);
  QString getDescription() const;
  void setDescription (QString description);
  qlonglong getDiscountId() const;
  void setDiscountId (qlonglong discountId);
  bool getHaveGuarantee() const;
  void setHaveGuarantee (bool haveGuarantee);
  bool getHaveInvoice() const;
  void setHaveInvoice (bool haveInvoice);
  QString getInputProperties() const;
  void setInputProperties (QString inputProperties);
  QString getIsAuthz() const;
  void setIsAuthz (QString isAuthz);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  qlonglong getItemsCount() const;
  void setItemsCount (qlonglong itemsCount);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getName() const;
  void setName (QString name);
  qlonglong getOrdersCount() const;
  void setOrdersCount (qlonglong ordersCount);
  QString getOuterId() const;
  void setOuterId (QString outerId);
  QList<FenxiaoPdu> getPdus() const;
  void setPdus (QList<FenxiaoPdu> pdus);
  QString getPictures() const;
  void setPictures (QString pictures);
  qlonglong getPid() const;
  void setPid (qlonglong pid);
  QString getPostageEms() const;
  void setPostageEms (QString postageEms);
  QString getPostageFast() const;
  void setPostageFast (QString postageFast);
  qlonglong getPostageId() const;
  void setPostageId (qlonglong postageId);
  QString getPostageOrdinary() const;
  void setPostageOrdinary (QString postageOrdinary);
  QString getPostageType() const;
  void setPostageType (QString postageType);
  qlonglong getProductcatId() const;
  void setProductcatId (qlonglong productcatId);
  QString getProperties() const;
  void setProperties (QString properties);
  QString getPropertyAlias() const;
  void setPropertyAlias (QString propertyAlias);
  QString getProv() const;
  void setProv (QString prov);
  qlonglong getQuantity() const;
  void setQuantity (qlonglong quantity);
  QString getRetailPriceHigh() const;
  void setRetailPriceHigh (QString retailPriceHigh);
  QString getRetailPriceLow() const;
  void setRetailPriceLow (QString retailPriceLow);
  qlonglong getScitemId() const;
  void setScitemId (qlonglong scitemId);
  QList<FenxiaoSku> getSkus() const;
  void setSkus (QList<FenxiaoSku> skus);
  QString getStandardPrice() const;
  void setStandardPrice (QString standardPrice);
  QString getStatus() const;
  void setStatus (QString status);
  QString getTradeType() const;
  void setTradeType (QString tradeType);
  QDateTime getUpshelfTime() const;
  void setUpshelfTime (QDateTime upshelfTime);
  
  virtual void parseResponse();

private:
/**
 * @brief 警戒库存
 **/
  qlonglong alarmNumber;

/**
 * @brief 类目id
 **/
  QString categoryId;

/**
 * @brief 所在地：市
 **/
  QString city;

/**
 * @brief 采购价格，单位：元。
 **/
  QString costPrice;

/**
 * @brief 创建时间
 **/
  QDateTime created;

/**
 * @brief 经销采购价
 **/
  QString dealerCostPrice;

/**
 * @brief 产品描述路径，通过http请求获取
 **/
  QString descPath;

/**
 * @brief 产品描述的内容
 **/
  QString description;

/**
 * @brief 折扣ID（新增参数）
 **/
  qlonglong discountId;

/**
 * @brief 是否有保修，可选值：false（否）、true（是）
 **/
  bool haveGuarantee;

/**
 * @brief 是否有发票，可选值：false（否）、true（是）
 **/
  bool haveInvoice;

/**
 * @brief 自定义属性，格式为pid:value;pid:value
 **/
  QString inputProperties;

/**
 * @brief 查询产品列表时，查询入参增加is_authz:yes|no  
yes:需要授权  
no:不需要授权
 **/
  QString isAuthz;

/**
 * @brief 导入的商品ID
 **/
  qlonglong itemId;

/**
 * @brief 下载人数
 **/
  qlonglong itemsCount;

/**
 * @brief 更新时间
 **/
  QDateTime modified;

/**
 * @brief 产品名称
 **/
  QString name;

/**
 * @brief 累计采购次数
 **/
  qlonglong ordersCount;

/**
 * @brief 商家编码
 **/
  QString outerId;

/**
 * @brief 产品分销商信息
 **/
  QList<FenxiaoPdu> pdus;

/**
 * @brief 产品图片路径
 **/
  QString pictures;

/**
 * @brief 产品ID
 **/
  qlonglong pid;

/**
 * @brief ems费用，单位：元
 **/
  QString postageEms;

/**
 * @brief 快递费用，单位：元
 **/
  QString postageFast;

/**
 * @brief 运费模板ID
 **/
  qlonglong postageId;

/**
 * @brief 平邮费用，单位：元
 **/
  QString postageOrdinary;

/**
 * @brief 运费类型，可选值：seller（供应商承担运费）、buyer（分销商承担运费）
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
 * @brief 属性别名，格式为pid:vid:alias;pid:vid:alias
 **/
  QString propertyAlias;

/**
 * @brief 所在地：省
 **/
  QString prov;

/**
 * @brief 产品库存
 **/
  qlonglong quantity;

/**
 * @brief 最高零售价，单位：分。
 **/
  QString retailPriceHigh;

/**
 * @brief 最低零售价，单位：分。
 **/
  QString retailPriceLow;

/**
 * @brief 关联的后端商品id
 **/
  qlonglong scitemId;

/**
 * @brief sku列表
 **/
  QList<FenxiaoSku> skus;

/**
 * @brief 采购基准价，单位：元。
 **/
  QString standardPrice;

/**
 * @brief 发布状态，可选值：up（上架）、down（下架）
 **/
  QString status;

/**
 * @brief 分销方式：AGENT（只做代销，默认值）、DEALER（只做经销）、ALL（代销和经销都做）
 **/
  QString tradeType;

/**
 * @brief 铺货时间
 **/
  QDateTime upshelfTime;

};

#endif  /* FENXIAOPRODUCT_H */
