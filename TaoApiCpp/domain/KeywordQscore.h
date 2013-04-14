#ifndef KEYWORDQSCORE_H
#define KEYWORDQSCORE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 关键词质量得分
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class KeywordQscore : public TaoDomain
{

public:
 virtual ~KeywordQscore() { }

  qlonglong getAdgroupId() const;
  void setAdgroupId (qlonglong adgroupId);
  qlonglong getCampaignId() const;
  void setCampaignId (qlonglong campaignId);
  qlonglong getKeywordId() const;
  void setKeywordId (qlonglong keywordId);
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
 * @brief 推广计划id
 **/
  qlonglong campaignId;

/**
 * @brief 关键词id
 **/
  qlonglong keywordId;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 质量得分
 **/
  QString qscore;

/**
 * @brief 关键词
 **/
  QString word;

};

#endif  /* KEYWORDQSCORE_H */
