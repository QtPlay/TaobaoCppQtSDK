#ifndef SIMBACREATIVESRECORDGETREQUEST_H
#define SIMBACREATIVESRECORDGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCreativesRecordGetResponse.h>

/**
 * TOP API: 根据一个创意Id列表取得创意对应的修改记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCreativesRecordGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCreativeIds() const
;  void setCreativeIds (qlonglong creativeIds);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaCreativesRecordGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 创意Id数组，最多200个
 **/
  qlonglong creativeIds;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBACREATIVESRECORDGETREQUEST_H */
