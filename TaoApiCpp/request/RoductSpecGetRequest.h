#ifndef RODUCTSPECGETREQUEST_H
#define RODUCTSPECGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/RoductSpecGetResponse.h>

/**
 * TOP API: 通过当个的spec_id获取到这个产品规格的信息，主要是因为产品规格是要经过审核的，所以通过这个接口可以获取到是否通过审核 
通过参看这个ProductSpec的status判断： 
1:表示审核通过 
3:表示等待审核。 
如果你的id找不到数据，那么就是审核被拒绝。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RoductSpecGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getSpecId() const
;  void setSpecId (qlonglong specId);


  virtual RoductSpecGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 要获取信息的产品规格信息。
 **/
  qlonglong specId;

};

#endif  /* RODUCTSPECGETREQUEST_H */
