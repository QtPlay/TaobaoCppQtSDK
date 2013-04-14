#ifndef SIMBAADGROUPCATMATCHUPDATEREQUEST_H
#define SIMBAADGROUPCATMATCHUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaAdgroupCatmatchUpdateResponse.h>

/**
 * TOP API: 更新一个推广组的类目出价，可以设置类目出价、是否使用默认出价、是否打开类目出价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupCatmatchUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupId() const
;  void setAdgroupId (qlonglong adgroupId);

 qlonglong getCatmatchId() const
;  void setCatmatchId (qlonglong catmatchId);

 qlonglong getMaxPrice() const
;  void setMaxPrice (qlonglong maxPrice);

 QString getNick() const
;  void setNick (QString nick);

 QString getOnlineStatus() const
;  void setOnlineStatus (QString onlineStatus);

 bool getUseDefaultPrice() const
;  void setUseDefaultPrice (bool useDefaultPrice);


  virtual SimbaAdgroupCatmatchUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组Id
 **/
  qlonglong adgroupId;

/**
 * @brief 类目出价Id
 **/
  qlonglong catmatchId;

/**
 * @brief 类目出价，单位为分，不能小于5。如果use_default_price字段为使用默认出价，则此max_price字段所传入的值不起作用。商品将会使用默认出价。
 **/
  qlonglong maxPrice;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 是否启用类目出价； offline-不启用 online-启用,如果此字段状态为offline时，则max_price,use_default_price字段值不起作用
 **/
  QString onlineStatus;

/**
 * @brief 是否使用推广组默认出价false为不使用，true为使用
 **/
  bool useDefaultPrice;

};

#endif  /* SIMBAADGROUPCATMATCHUPDATEREQUEST_H */
