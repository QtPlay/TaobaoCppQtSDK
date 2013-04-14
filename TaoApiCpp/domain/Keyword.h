#ifndef KEYWORD_H
#define KEYWORD_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 关键词
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Keyword : public TaoDomain
{

public:
 virtual ~Keyword() { }

  qlonglong getAdgroupId() const;
  void setAdgroupId (qlonglong adgroupId);
  QString getAuditDesc() const;
  void setAuditDesc (QString auditDesc);
  QString getAuditStatus() const;
  void setAuditStatus (QString auditStatus);
  qlonglong getCampaignId() const;
  void setCampaignId (qlonglong campaignId);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  bool getIsDefaultPrice() const;
  void setIsDefaultPrice (bool isDefaultPrice);
  bool getIsGarbage() const;
  void setIsGarbage (bool isGarbage);
  qlonglong getKeywordId() const;
  void setKeywordId (qlonglong keywordId);
  QString getMatchScope() const;
  void setMatchScope (QString matchScope);
  qlonglong getMaxPrice() const;
  void setMaxPrice (qlonglong maxPrice);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getNick() const;
  void setNick (QString nick);
  QString getQscore() const;
  void setQscore (QString qscore);
  QString getWord() const;
  void setWord (QString word);
  
  virtual void parseResponse();

private:
/**
 * @brief 推广组id
 **/
  qlonglong adgroupId;

/**
 * @brief 审核拒绝原因描述
 **/
  QString auditDesc;

/**
 * @brief 审核状态：  
audit_wait-待审核； 
audit_pass-审核通过(上线)； 
audit_reject-审核拒绝； 
audit_offline-审核直接下线； 
默认为 audit_pass。
 **/
  QString auditStatus;

/**
 * @brief 推广计划id
 **/
  qlonglong campaignId;

/**
 * @brief 创建时间
 **/
  QDateTime createTime;

/**
 * @brief 是否使用推广组默认出价，true-是；false-否；
 **/
  bool isDefaultPrice;

/**
 * @brief 是否是垃圾词，false-不是；true-是；垃圾词是近期无点击的词
 **/
  bool isGarbage;

/**
 * @brief 关键词id
 **/
  qlonglong keywordId;

/**
 * @brief 匹配模式
 **/
  QString matchScope;

/**
 * @brief 关键词出价，单位为分，不能小于5
 **/
  qlonglong maxPrice;

/**
 * @brief 最后修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 词质量得分
 **/
  QString qscore;

/**
 * @brief 关键词
 **/
  QString word;

};

#endif  /* KEYWORD_H */
