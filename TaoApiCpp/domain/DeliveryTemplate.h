#ifndef DELIVERYTEMPLATE_H
#define DELIVERYTEMPLATE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/TopFee.h>


/**
 * @brief 运费模板对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class DeliveryTemplate : public TaoDomain
{

public:
 virtual ~DeliveryTemplate() { }

  QString getAddress() const;
  void setAddress (QString address);
  qlonglong getAssumer() const;
  void setAssumer (qlonglong assumer);
  qlonglong getConsignAreaId() const;
  void setConsignAreaId (qlonglong consignAreaId);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QList<TopFee> getFeeList() const;
  void setFeeList (QList<TopFee> feeList);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getName() const;
  void setName (QString name);
  QString getSupports() const;
  void setSupports (QString supports);
  qlonglong getTemplateId() const;
  void setTemplateId (qlonglong templateId);
  qlonglong getValuation() const;
  void setValuation (qlonglong valuation);
  
  virtual void parseResponse();

private:
/**
 * @brief 运费模板上设置的发货地址
 **/
  QString address;

/**
 * @brief 可选值：0,1  
说明 
0:表示买家承担服务费; 
1:表示卖家承担服务费
 **/
  qlonglong assumer;

/**
 * @brief 该模板上设置的卖家发货地址区域ID，如：address为浙江省杭州市西湖去文三路XX号那么这个consign_area_id的值就是西湖区的ID
 **/
  qlonglong consignAreaId;

/**
 * @brief 模板创建时间
 **/
  QDateTime created;

/**
 * @brief 运费模板中运费详细信息对象，包含默认运费和指定地区运费
 **/
  QList<TopFee> feeList;

/**
 * @brief 模板修改时间
 **/
  QDateTime modified;

/**
 * @brief 模板名称，长度不能超过25个字节
 **/
  QString name;

/**
 * @brief 物流服务模板支持增值服务列表，多个用分号隔开。cod:货到付款 mops：刷卡付款
 **/
  QString supports;

/**
 * @brief 模块ID
 **/
  qlonglong templateId;

/**
 * @brief 可选值：0 
说明： 
0:表示按宝贝件数计算运费 
<br/><br/> 
1:表示按宝贝重量计算运费 
<br/><br/> 
3:表示按宝贝体积计算运费
 **/
  qlonglong valuation;

};

#endif  /* DELIVERYTEMPLATE_H */
