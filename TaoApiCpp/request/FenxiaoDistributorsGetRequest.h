#ifndef FENXIAODISTRIBUTORSGETREQUEST_H
#define FENXIAODISTRIBUTORSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoDistributorsGetResponse.h>

/**
 * TOP API: 查询和当前登录供应商有合作关系的分销商的信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoDistributorsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNicks() const
;  void setNicks (QString nicks);


  virtual FenxiaoDistributorsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 分销商用户名列表。多个之间以“,”分隔;最多支持50个分销商用户名。
 **/
  QString nicks;

};

#endif  /* FENXIAODISTRIBUTORSGETREQUEST_H */
