#ifndef SIMBAADGROUPSCHANGEDGETRESPONSE_H
#define SIMBAADGROUPSCHANGEDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ADGroupPage.h>


/**
 * @brief TOP RESPONSE API: 分页获取修改的推广组ID和修改时间
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupsChangedGetResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupsChangedGetResponse() { }

  ADGroupPage getAdgroups() const;
  void setAdgroups (ADGroupPage adgroups);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广组分页对象
 **/
  ADGroupPage adgroups;

};

#endif
