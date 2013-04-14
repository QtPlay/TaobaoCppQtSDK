#ifndef SIMBAADGROUPONLINEITEMSVONGETREQUEST_H
#define SIMBAADGROUPONLINEITEMSVONGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaAdgroupOnlineitemsvonGetResponse.h>

/**
 * TOP API: 获取用户上架在线销售的全部宝贝
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupOnlineitemsvonGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);

 bool getOrderBy() const
;  void setOrderBy (bool orderBy);

 QString getOrderField() const
;  void setOrderField (QString orderField);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);


  virtual SimbaAdgroupOnlineitemsvonGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 排序，true:降序， false:升序
 **/
  bool orderBy;

/**
 * @brief 排序字段，starts：按开始时间排序bidCount:按销量排序
 **/
  QString orderField;

/**
 * @brief 页码，从1开始,最大50。最大只能获取1W个宝贝
 **/
  qlonglong pageNo;

/**
 * @brief 页尺寸，最大200
 **/
  qlonglong pageSize;

};

#endif  /* SIMBAADGROUPONLINEITEMSVONGETREQUEST_H */
