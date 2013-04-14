#ifndef WLBSELLERSUBSCRIPTION_H
#define WLBSELLERSUBSCRIPTION_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>
#include <TaoApiCpp/domain/WlbPartnerAddress.h>
#include <TaoApiCpp/domain/WlbPartnerContact.h>


/**
 * @brief 卖家定购的服务
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbSellerSubscription : public TaoDomain
{

public:
 virtual ~WlbSellerSubscription() { }

  QDateTime getEndDate() const;
  void setEndDate (QDateTime endDate);
  QDateTime getGmtCreate() const;
  void setGmtCreate (QDateTime gmtCreate);
  QDateTime getGmtModified() const;
  void setGmtModified (QDateTime gmtModified);
  qlonglong getId() const;
  void setId (qlonglong id);
  qlonglong getIsOwnService() const;
  void setIsOwnService (qlonglong isOwnService);
  qlonglong getParentId() const;
  void setParentId (qlonglong parentId);
  qlonglong getProviderUserId() const;
  void setProviderUserId (qlonglong providerUserId);
  QString getRemark() const;
  void setRemark (QString remark);
  QString getServiceAlias() const;
  void setServiceAlias (QString serviceAlias);
  QString getServiceCode() const;
  void setServiceCode (QString serviceCode);
  qlonglong getServiceId() const;
  void setServiceId (qlonglong serviceId);
  QString getServiceName() const;
  void setServiceName (QString serviceName);
  QString getServiceType() const;
  void setServiceType (QString serviceType);
  QDateTime getStartDate() const;
  void setStartDate (QDateTime startDate);
  QString getStatus() const;
  void setStatus (QString status);
  qlonglong getSubscriberUserId() const;
  void setSubscriberUserId (qlonglong subscriberUserId);
  QString getSubscriberUserNick() const;
  void setSubscriberUserNick (QString subscriberUserNick);
  WlbPartnerAddress getWlbPartnerAddress() const;
  void setWlbPartnerAddress (WlbPartnerAddress wlbPartnerAddress);
  WlbPartnerContact getWlbPartnerContact() const;
  void setWlbPartnerContact (WlbPartnerContact wlbPartnerContact);
  
  virtual void parseResponse();

private:
/**
 * @brief 定购有效结束日期
 **/
  QDateTime endDate;

/**
 * @brief 创建时间
 **/
  QDateTime gmtCreate;

/**
 * @brief 修改时间
 **/
  QDateTime gmtModified;

/**
 * @brief 定购ID
 **/
  qlonglong id;

/**
 * @brief 判断该仓库是否是实体仓，还是虚拟仓，null是实体仓，10:代表虚拟仓
 **/
  qlonglong isOwnService;

/**
 * @brief 父定购ID 
可通过该字段来得之服务上下级关系。 
例定购了仓储服务，下又有TMS服务。 
该字段保存仓储服务ID。
 **/
  qlonglong parentId;

/**
 * @brief 服务商ID
 **/
  qlonglong providerUserId;

/**
 * @brief 备注
 **/
  QString remark;

/**
 * @brief 自有仓的别名，当当前订购记录为自有仓时才会有值
 **/
  QString serviceAlias;

/**
 * @brief 服务编码
 **/
  QString serviceCode;

/**
 * @brief 服务ID
 **/
  qlonglong serviceId;

/**
 * @brief 服务名
 **/
  QString serviceName;

/**
 * @brief 服务类型， 
STORE 1-仓储、 
TMS 2-TMS、 
PACKAGE 3-包装服务 
SUPPLIER 4-供货 
INSTALL 5-安装 
COMPLEX_SERVICE 100-综合服务
 **/
  QString serviceType;

/**
 * @brief 定购有效开始日期
 **/
  QDateTime startDate;

/**
 * @brief 状态 
AUDITING 1-待审核 
CANCEL 2-撤销 
CHECKED 3-审核通过 
FAILED 4-审核未通过 
SYNCHRONIZING 5-同步中
 **/
  QString status;

/**
 * @brief 定购用户ID
 **/
  qlonglong subscriberUserId;

/**
 * @brief 定购用户NICK
 **/
  QString subscriberUserNick;

/**
 * @brief 联系人地址信息
 **/
  WlbPartnerAddress wlbPartnerAddress;

/**
 * @brief 联系人联系详情
 **/
  WlbPartnerContact wlbPartnerContact;

};

#endif  /* WLBSELLERSUBSCRIPTION_H */
