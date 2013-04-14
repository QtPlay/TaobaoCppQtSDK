#ifndef SIMBACREATIVESGETREQUEST_H
#define SIMBACREATIVESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCreativesGetResponse.h>

/**
 * TOP API: 取得一个推广组的所有创意或者根据一个创意Id列表取得一组创意； 
如果同时提供了推广组Id和创意id列表，则优先使用推广组Id；
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCreativesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupId() const
;  void setAdgroupId (qlonglong adgroupId);

 qlonglong getCreativeIds() const
;  void setCreativeIds (qlonglong creativeIds);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaCreativesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组Id
 **/
  qlonglong adgroupId;

/**
 * @brief 创意Id数组，最多200个
 **/
  qlonglong creativeIds;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBACREATIVESGETREQUEST_H */
