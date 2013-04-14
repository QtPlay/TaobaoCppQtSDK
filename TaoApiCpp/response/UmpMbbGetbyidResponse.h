#ifndef UMPMBBGETBYIDRESPONSE_H
#define UMPMBBGETBYIDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 根据积木块id获取营销积木块。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpMbbGetbyidResponse : public TaoResponse
{
public:
 virtual ~UmpMbbGetbyidResponse() { }

  QString getMbb() const;
  void setMbb (QString mbb);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 营销积木块定义信息，可以通过ump sdk里面的MBB.fromJson来处理
 **/
  QString mbb;

};

#endif
