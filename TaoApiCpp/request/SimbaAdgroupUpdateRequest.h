#ifndef SIMBAADGROUPUPDATEREQUEST_H
#define SIMBAADGROUPUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaAdgroupUpdateResponse.h>

/**
 * TOP API: 更新一个推广组的信息，可以设置默认出价、是否上线、非搜索出价、非搜索是否使用默认出价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupId() const
;  void setAdgroupId (qlonglong adgroupId);

 qlonglong getDefaultPrice() const
;  void setDefaultPrice (qlonglong defaultPrice);

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getNonsearchMaxPrice() const
;  void setNonsearchMaxPrice (qlonglong nonsearchMaxPrice);

 QString getOnlineStatus() const
;  void setOnlineStatus (QString onlineStatus);

 bool getUseNonsearchDefaultPrice() const
;  void setUseNonsearchDefaultPrice (bool useNonsearchDefaultPrice);


  virtual SimbaAdgroupUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组Id
 **/
  qlonglong adgroupId;

/**
 * @brief 默认出价，单位是分，不能小于5
 **/
  qlonglong defaultPrice;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 非搜索出价，单位是分，不能小于5，如果use_nonseatch_default_price为使用默认出价，则此nonsearch_max_price字段传入的数据不起作用，商品将使用默认非搜索出价
 **/
  qlonglong nonsearchMaxPrice;

/**
 * @brief 用户设置的上下线状态 offline-下线(暂停竞价)； online-上线；默认为online
 **/
  QString onlineStatus;

/**
 * @brief 非搜索是否使用默认出价，false-不用；true-使用；默认为true;
 **/
  bool useNonsearchDefaultPrice;

};

#endif  /* SIMBAADGROUPUPDATEREQUEST_H */
