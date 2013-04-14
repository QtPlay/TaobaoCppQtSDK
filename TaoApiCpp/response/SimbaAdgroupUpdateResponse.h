#ifndef SIMBAADGROUPUPDATERESPONSE_H
#define SIMBAADGROUPUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ADGroup.h>


/**
 * @brief TOP RESPONSE API: 更新一个推广组的信息，可以设置默认出价、是否上线、非搜索出价、非搜索是否使用默认出价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupUpdateResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupUpdateResponse() { }

  ADGroup getAdgroup() const;
  void setAdgroup (ADGroup adgroup);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 被修改的推广组
 **/
  ADGroup adgroup;

};

#endif
